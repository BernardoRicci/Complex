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

//print
void Complex::print() const {
  using namespace std;
  cout << "datum: " << real_
       << " +/- i" << imm_ << endl;
}

//Functions
double Complex::re(){
    return real_;
}
double Complex::im(){
    return imm_;
}
double Complex::mag(){
    return sqrt( (real_*real_) + (imm_*imm_));
}
double Complex::r(){
    return sqrt( (real_*real_) + (imm_*imm_));
}
double Complex::phase(){
    return atan(imm_/real_);
}
double Complex::phi(){
    return atan(imm_/real_);
}

//Overloading between Complex & double
Complex Complex::operator*( const double& rhs ) const {
    return Complex(real_*rhs, imm_*rhs);
}
Complex Complex::operator/( const double& rhs ) const {
    return Complex(real_/rhs, imm_/rhs);
}
