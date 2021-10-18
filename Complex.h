//Complex.h

#ifndef Complex_h
#define Complex_h

#include <iostream>
#include <cmath>
using namespace std;

class Complex{
    public:
    //Constructors & Destructor
    Complex();                          //Default constructor
    Complex(double x, double y);        //Regular constructor
    Complex(const Complex& complex);    //Copy constructor
    ~Complex() {};                      //Destructor

    //Getters
    double real() const {return real_;}
    double imm() const {return imm_;}
    double R() const {return sqrt( (real_*real_) + (imm_*imm_));}
    double Phi() const {return atan(imm_/real_);}

    //Setters
    void SetReal(double real) { real_=real;};
    void SetImmaginary(double imm) { imm_=imm; };

    //print
    void print() const;


    //Functions
    double re();
    double im();
    double mag();
    double r();
    double phase();
    double phi();

    //Overloading between Complex
    Complex operator+ (const Complex& rhs) const; //SUM between two complex numbers
    Complex operator- (const Complex& rhs) const; //DIFFERENCE between two complex numbers
    Complex operator* (const Complex& rhs) const; //MOLTIPLICATION between two complex numbers
    Complex operator/ (const Complex& rhs) const; //DIVISION between two complex numbers

    const Complex& operator= (const Complex& rhs); //Assignment operator
    const Complex& operator+= (const Complex& rhs); //Sum & Assignment operator
    const Complex& operator-= (const Complex& rhs); //Difference & Assignment operator
    const Complex& operator*= (const Complex& rhs); //Moltiplication & Assignment operator
    const Complex& operator/= (const Complex& rhs); //Division & Assignment operator

    //Overloading between Complex & double
    Complex operator*( const double& rhs ) const;
    Complex operator/( const double& rhs ) const;


    private:
    double real_;
    double imm_;

};

//Global functioncs
Complex operator*(const double& lhs, const Complex& rhs);
ostream& operator<<(ostream& os, const Complex& rhs);

#endif
