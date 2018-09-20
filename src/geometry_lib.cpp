#include "../include/geometry_lib.h"
#include <cmath>

int makePoint(double X, double Y, Point2D *pt) 
{
    pt->X = X;
    pt->Y = Y;
}

int makePoint(double X, double Y, double Z, Point3D *pt)
{
    pt->X = X;
    pt->Y = Y;
    pt->Z = Z;
}

// Distance Functions
double distance(Point2D pt1, Point2D pt2)
{
    return sqrt(pow(pt2.X - pt1.X, 2) + pow(pt2.Y - pt1.Y, 2) );
}

double distance(Point3D pt1, Point3D pt2)
{
   return sqrt( pow(pt2.X - pt1.X, 2) + pow(pt1.Y - pt2.Y, 2) + pow(pt2.Z - pt1.Z, 2) );
}

// Fix for my collinear. Basically almost = to with high precision.
bool almostEqual(double d1, double d2){
    double epsilon = 1e-6;
    return std::fabs(d1 - d2) < epsilon;
}

// Collinear Functions
double collinear(Point2D pt1, Point2D pt2, Point2D pt3)
{
    double AC, AB, BC, sum1, sum2, sum3;

    AC = distance(pt1, pt3);
    AB = distance(pt1, pt2);
    BC = distance(pt2, pt3);

    sum1 = AB + BC;
    sum2 = AC + BC;
    sum3 = AB + AC;
    
    if ( almostEqual(sum1, AC) || almostEqual(sum2, AB) || almostEqual(sum3, BC) ) {
        return true;
    }
    else{
        return false;
    }
}

// Returns the sum of the lengths of the line segments between the 4 points.

double perimLength(Point2D pt1, Point2D pt2, Point2D pt3, Point2D pt4)
{
    return distance(pt1, pt2) + distance(pt2, pt3) + distance(pt3, pt4) + distance(pt1, pt4);
}