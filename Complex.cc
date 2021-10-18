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
double Complex::re(){
    return real_;
}
double Complex::im(){
    return imm_;
}

