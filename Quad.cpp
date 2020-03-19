/*
Implement the function findRoots to find the roots of the quadratic equation: ax2 + bx + c = 0. If the equation has only one solution, the function should return that solution as both elements of the pair. The equation will always have at least one solution.

The roots of the quadratic equation can be found with the following formula: A quadratic equation.

For example, the roots of the equation 2x2 + 10x + 8 = 0 are -1 and -4.

*/


#include <tuple>
#include <stdexcept>
#include <iostream>
#include <string>
#include <math.h> 

std::pair<double, double> findRoots(double a, double b, double c)
{    
    double D, x1,x2;
    D = sqrt(pow(b,2) - (4*a*c));
    std::cout<<"D : "<<D<<std::endl;
    x1 = (- b - D)/(2*a);
    x2 = (- b + D)/(2*a);
    std::cout<<x1<<x2<<std::endl;
    std::pair <double, double> X;
    X.first = x1;
    X.second = x2;
    return X;
}

#ifndef RunTests
int main()
{
    std::pair<double,double> roots = findRoots(2, 10, 8);
    std::cout << "Roots: " + std::to_string(roots.first) + ", " + std::to_string(roots.second);
}
#endif
