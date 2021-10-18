// Implementation of the COMPLEX class

// here I include the header file for the class Complex
#include "Complex.h"

#include <iostream>
#include <math.h>
using namespace std;

//constructor
Complex::Complex (double Re, double Im){

  Re_ = Re;
  Im_ = Im;

}

//getters
double Complex::Re(){ // parte reale
  return Re_;
}

double Complex::Im(){ // parte immaginaria
  return Im_;
}

double Complex::R(){ // rho
  return ( sqrt(Im_*Im_ + Re_*Re_) );
}

double Complex::Phi(){ // fase
  return (atan (Im_/Re_)) ;
}

//setters
void Complex::setRe(double re){
  Re_ = re;
}

void Complex::setIm(double im){
  Im_ = im;
}

void Complex::print (){
  cout << "complex number = (" << Re_ << ")  + i (" << Im_ << ")" << endl;
}

// overloading operators

Complex Complex::operator+ (const Complex& rhs) const {

  double sum_re = Re_ + rhs.Re_;
  double sum_im = Im_ + rhs.Im_;

  return Complex(sum_re, sum_im);

}

Complex Complex::operator- (const Complex& rhs) const {

  double diff_re = Re_ - rhs.Re_;
  double diff_im = Im_ - rhs.Im_;

  return Complex(diff_re, diff_im);

}

Complex Complex::operator* (const Complex& rhs) const {

  double product_re = Re_ * rhs.Re_ - Im_ * rhs.Im_;
  double product_im = Re_ * rhs.Im_ + Im_ * rhs.Re_;

  return Complex(product_re, product_im);

}

Complex Complex::operator/ (const Complex& rhs) const {

  double div_re = (Re_ * rhs.Re_ + Im_ * rhs.Im_) * (1/(rhs.Re_*rhs.Re_ + rhs.Im_*rhs.Im_));
  double div_im = (Re_ + rhs.Im_ - Im_ * rhs.Re_) * (1/(rhs.Re_*rhs.Re_ + rhs.Im_*rhs.Im_));

  return Complex(div_re, div_im);

}

Complex Complex::operator= (const Complex& rhs) const {

  Re_ = rhs.Re_;
  Im_ = rhs.Im_;

  return *this;

}
