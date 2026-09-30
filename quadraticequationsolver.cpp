#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

int main(){

float a,b,c;
float disc;
float root1,root2;
complex <float> root3,root4;
cout << "QUADRATIC EQUATION SOLVER\n=========================\n\n";
cout << "Enter values for a, b and c where ax^2 + bx + c = 0 \n";
cin >> a; cin >> b; cin >> c;
cout << "You have entered the equation "<< a << "x^2 + " << b << "x + " << c << "\n";
disc = b*b - 4*a*c;
if(disc>=0){
    cout << "The equation is rational and the roots are real\n";
    root1 = (-b +sqrt(disc)) / (2*a);
    root2 = (-b -sqrt(disc)) / (2*a);
    cout << "The first root of the equation is " << root1 << " and the second root is " << root2 << "\n\n";
    cout << "VERIFICATION\n===========\n\n";
    cout << a*root1*root1 + b*root1 + c << " == 0\n";
    cout << a*root2*root2 + b*root2 + c << " == 0\n";
}
else
{
    cout << "The equation is irrational and the roots are complex\n";
    complex <float> cmplxdisc (disc,0);
    root3 = (-b +sqrt(cmplxdisc)) / (2*a);
    root4 = (-b -sqrt(cmplxdisc)) / (2*a);
    cout << "The first root of the equation is " << real(root3) << " + " << imag(root3) << "i" << " and the second root is " << real(root4) << " + " << imag(root4) << "i" << "\n\n";
    cout << "VERIFICATION\n===========\n\n";
    complex <float> ver1 = a*root3*root3 + b*root3 + c;
    complex <float> ver2 = a*root4*root4 + b*root4 + c;
    cout << real(ver1) + imag(ver1) << " == 0\n";
    cout << real(ver2) + imag(ver2) << " == 0\n";

}
}
