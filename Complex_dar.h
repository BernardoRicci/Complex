// Header file of the COMPLEX CLASS


#include <iostream>
using namespace std;

class Complex{

public:
// constructor
  Complex(double Re, double Im);

// getters
  double Re();
  double Im();
  double R();
  double Phi();
//setters
  void setRe (double re);
  void setIm (double im);

//other
  void print ();

//overloaded operators

  Complex operator+ (const Complex& rhs) const; //SUM between two complex numbers
  Complex operator- (const Complex& rhs) const; //DIFFERENCE between two complex numbers
  Complex operator* (const Complex& rhs) const; //MOLTIPLICATION between two complex numbers
  Complex operator/ (const Complex& rhs) const; //DIVISION between two complex numbers

  const Complex& operator= (const Complex& rhs); //Assignment operator
  Complex operator+= (const Complex& rhs) const; //Sum & Assignment operator
  Complex operator-= (const Complex& rhs) const; //Difference & Assignment operator
  Complex operator*= (const Complex& rhs) const; //Moltiplication & Assignment operator
  Complex operator/= (const Complex& rhs) const; //Division & Assignment operator

private:
  double Re_, Im_;

};
