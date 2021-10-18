//Complex.cc

#include "Complex.h"

#include <iostream>
#include <cmath>
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
   cout << "complex number = (" << real_ << ")  + i (" << imm_ << ")" << endl;
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


//Overloading between Complex
Complex Complex::operator+ (const Complex& rhs) const {

  double sum_re = real_ + rhs.real_;
  double sum_im = imm_ + rhs.imm_;

  return Complex(sum_re, sum_im);

}

Complex Complex::operator- (const Complex& rhs) const {

  double diff_re = real_ - rhs.real_;
  double diff_im = imm_ - rhs.imm_;

  return Complex(diff_re, diff_im);

}

Complex Complex::operator* (const Complex& rhs) const {

  double product_re = real_ * rhs.real_ - imm_ * rhs.imm_;
  double product_im = real_ * rhs.imm_ + imm_ * rhs.real_;

  return Complex(product_re, product_im);

}

Complex Complex::operator/ (const Complex& rhs) const {

  double div_re = (real_ * rhs.real_ + imm_ * rhs.imm_) * (1/(rhs.real_*rhs.real_ + rhs.imm_*rhs.imm_));
  double div_im = (real_ + rhs.imm_ - imm_ * rhs.real_) * (1/(rhs.real_*rhs.real_ + rhs.imm_*rhs.imm_));

  return Complex(div_re, div_im);

}

const Complex& Complex::operator= (const Complex& rhs) {

  real_ = rhs.real_;
  imm_ = rhs.imm_;

  return *this;

}

const Complex& Complex::operator+= (const Complex& rhs) {

  real_ += rhs.real_;
  imm_ += rhs.imm_;

  return *this;

}

const Complex& Complex::operator-= (const Complex& rhs) {

  real_ -= rhs.real_;
  imm_ -= rhs.imm_;

  return *this;

}

const Complex& Complex::operator*= (const Complex& rhs) {

  double new_re = real_ * rhs.real_ - imm_ * rhs.imm_;
  double new_im = real_ * rhs.imm_ + imm_ * rhs.real_;

  real_ = new_re;
  imm_ = new_im;

  return *this;

}

const Complex& Complex::operator/= (const Complex& rhs) {

  double new_re = (real_ * rhs.real_ + imm_ * rhs.imm_) * (1/(rhs.real_*rhs.real_ + rhs.imm_*rhs.imm_));
  double new_im =  (real_ + rhs.imm_ - imm_ * rhs.real_) * (1/(rhs.real_*rhs.real_ + rhs.imm_*rhs.imm_));

  real_ = new_re;
  imm_ = new_im;
  
  return *this;

}

//Overloading between Complex & double
Complex Complex::operator*( const double& rhs ) const {
    return Complex(real_*rhs, imm_*rhs);
}
Complex Complex::operator/( const double& rhs ) const {
    return Complex(real_/rhs, imm_/rhs);
}

//Global functions
Complex operator*(const double& lhs, const Complex& rhs){
  return Complex(lhs*rhs.real(), lhs*rhs.imm() );
}
ostream& operator<<(ostream& os, const Complex& rhs){
  using namespace std;
  os << rhs.real() << " +/- " << rhs.imm();
  return os;
}
