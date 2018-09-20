#ifndef __GEOMETRY_LIB_H__ 
#define __GEOMETRY_LIB_H__ 

// Data structures 
typedef struct { 
    double X; 
    double Y;
} Point2D; 

typedef struct { 
    double X; 
    double Y; 
    double Z; 
} Point3D;

// Function prototypes
int makePoint(double X, double Y, Point2D *pt); 
int makePoint(double X, double Y, double Z, Point3D *pt);
double distance(Point2D pt1, Point2D pt2);
double distance(Point3D pt1, Point3D pt2);
bool almostEqual(double d1, double d2);
double collinear(Point2D pt1, Point2D pt2, Point2D pt3);
double perimLength(Point2D pt1, Point2D pt2, Point2D pt3, Point2D pt4);


#endif  // __SPACE_LIB_H__