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
  const Complex& operator+= (const Complex& rhs); //Sum & Assignment operator
  const Complex& operator-= (const Complex& rhs); //Difference & Assignment operator
  const Complex& operator*= (const Complex& rhs); //Moltiplication & Assignment operator
  const Complex& operator/= (const Complex& rhs); //Division & Assignment operator

private:
  double Re_, Im_;

};
