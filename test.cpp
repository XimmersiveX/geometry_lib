#include <iostream> 
#include <vector>
#include "include/geometry_lib.h"

using namespace std;

// Local prototypes 
void displayPoint( Point2D pt );
void displayPoint( Point3D pt );

int main(int argc, char **argv) 
{
    Point2D pt2D, pt2D2, pt2D3, pt2D4;
    Point3D pt3D, pt3D2, pt3D3;

/*
    2D Stuff
    These numbers are collinear
    Test Collinear - on paper these points are collinear
    But do not show as collinear in the program without my almostEqual() function.
*/

    cout << "-----2D points-----" << endl;

    makePoint(2, -9, &pt2D);
    makePoint(1, -6, &pt2D2);
    makePoint(-3, 6, &pt2D3);
// Extra point for perimLength() function
    makePoint(10, 12, &pt2D4);

    cout << "2D Point 1 = "; displayPoint(pt2D);
    cout << "2D Point 2 = "; displayPoint(pt2D2);
    cout << "2D Point 3 = "; displayPoint(pt2D3);
    cout << "2D Point 4 = "; displayPoint(pt2D4);

    cout << endl;

    cout << "AC distance = " << distance(pt2D, pt2D3) << endl;
    cout << "AB distance = " << distance(pt2D, pt2D2) << endl;
    cout << "BC distance = " << distance(pt2D2, pt2D3) << endl;
    cout << "Are 2D points collinear? " << collinear(pt2D, pt2D2, pt2D3) << endl;

    cout << endl;

    cout << "AB distance = " << distance(pt2D, pt2D2) << endl;
    cout << "BC distance = " << distance(pt2D2, pt2D3) << endl;
    cout << "CD distance = " << distance(pt2D3, pt2D4) << endl;
    cout << "Sum of all the lengths = " << perimLength(pt2D, pt2D2, pt2D3, pt2D4) << endl;

    cout << endl;


// 3D Stuff
    cout << "-----3D Points-----" << endl;
    makePoint(1, 1, 1, &pt3D);
    makePoint(3, 3, 3, &pt3D2);
    makePoint(2, 2, 2, &pt3D3);

    cout << "3D Point 1 = "; displayPoint(pt3D);
    cout << "3D Point 2 = "; displayPoint(pt3D2);
    cout << "3D Point 2 = "; displayPoint(pt3D3);

    cout << endl;

    cout << "AC distance = " << distance(pt3D, pt3D3) << endl;
    cout << "AB distance = " << distance(pt3D, pt3D2) << endl;
    cout << "BC distance = " << distance(pt3D2, pt3D3) << endl;

    return 0; 
}

void displayPoint( Point2D pt )
{
    cout << "X: " << pt.X << ", Y: " << pt.Y << endl; 
}

void displayPoint( Point3D pt ) 
{
    cout << "X: " << pt.X << ", Y: " << pt.Y << ", Z: " << pt.Z << endl; 
}
