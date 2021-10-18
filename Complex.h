//Complex.h

#ifndef Complex_h
#define Complex_h

class Complex{
    public:
    //Constructors & Destructor
    Complex();                          //Default constructor
    Complex(double x, double y);        //Regular constructor
    Complex(const Complex& complex);    //Copy constructor
    ~Complex() {};                      //Destructor

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

    private:
    double real_;
    double imm_;

};
#endif
