#ifndef		_MY_NP_H		
#define		_MY_NP_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define		PI		3.14159265358979323846264338327950288419716939937510582
#define DEG2RAD(X) (X * PI / 180.0)
#define RAD2DEG(X) (X * 180.0 / PI)

extern void printVec(double* vec, int row);



//calculate power x^N
extern double power(double _x, int N);
//calculate factorial x!
extern double factorial(int _x);



//returns sin(x) in unit [rad]
extern double sinTaylor(double _x);
//returns sin(x) in unit [deg]
extern double sindTaylor(double _x);

//returns cos(x) in unit [rad]
extern double cosTaylor(double _x);
//returns cos(x) in unit [deg]
extern double cosdTaylor(double _x);


//returns e^x 
extern double expTaylor(double _x);

//Bisection Method
double bisection(double func(double x), double dfunc(double x), double _a0, double _b0, double _tol);

//Newton-Raphson Method
double newtonRaphson(double func(double x), double dfunc(double x), double _x0, double _tol);

//Secant Method
double secantfzero(double func(double x), double x0, double x1, double tol);

//calculate factorial x!
extern double factorial(int _x);



/*Differentiation*/

//1st order differentiation from a set of discrete data    :O(h^2)
void gradient1D(double _x[], double _y[], double dydx[], int m);

//1st order differentiation from the user-defined equation :O(h^2)
void gradientFunc(double func(const double x), double _x[], double dydx[], int m);

//2nd order differentiation using discrete points
void acceleration(double x[], double y[], double dy2dx2[], int m);


//integral using trapzoidal method
double trapz(double x[], double y[], int m);
//integral using simpson 1/3 method
double simpson13(double x[], double y[], int m);
//integral using simpson 1/3 method +3/8 method
double integral(double func(const double x), double a, double b, int n);
#endif
#pragma once
