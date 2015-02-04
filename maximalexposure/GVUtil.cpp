////////////////////////////////////////////////////////////////////////////////
// GVUtil.cpp                                                                 //
//                                                                            //
// Standard Utility Functions for Classes.                                    //
////////////////////////////////////////////////////////////////////////////////



// Includes ////////////////////////////////////////////////////////////////////
#include "GVUtil.h"



// GVUtil //////////////////////////////////////////////////////////////////////
double GenerateRandomDouble(double LowerBound, double UpperBound)
{ // GenerateRandomDouble
  double t = ((double) (rand() % (GVUTIL_ACCURACY + 1))) / ((double) GVUTIL_ACCURACY);
  return(LowerBound + t * (UpperBound - LowerBound));
} // GenerateRandomDouble



double Distance2D(double X1, double Y1, double X2, double Y2)
{ // Distance2D
  double DX = X1 - X2;
  double DY = Y1 - Y2;
  return(sqrt(DX * DX + DY * DY));
} // Distance2D



double Distance3D(double X1, double Y1, double Z1, double X2, double Y2, double Z2)
{ // Distance3D
  double DX = X1 - X2;
  double DY = Y1 - Y2;
  double DZ = Z1 - Z2;
  return(sqrt(DX * DX + DY * DY + DZ * DZ));
} // Distance3D