//Complex.cc

#include "Complex.h"

#include <iostream>
using namespace std;

//Constructors
Complex::Complex(){
    real_=0.;
    imm_=0.;
}
Complex::Complex(double x, double y){
    real_=x;
    imm_=y;
}
Complex::Complex(const Complex& complex){
    real_=complex.real_;
    imm_=complex.imm_;
}

//Functions
double Complex::re(const Complex& rhs){
    return rhs.real_;
}
double Complex::im(const Complex& rhs){
    return rhs.imm_;
}
