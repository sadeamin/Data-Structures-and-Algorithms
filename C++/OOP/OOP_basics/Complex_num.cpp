#include<iostream>
using namespace std;

class Complex_num
    {
    private:
        int real;
        int imag;
    public:
        Complex_num(int real, int imag){
            this->real = real;
            this->imag = imag;
        }
            
        
        void plus(Complex_num const &c2) {
            this->real = this->real + c2.real;
            this->imag = this->imag + c2.imag;
            
            // print();
        }

        void multiply(Complex_num const &c2) {
            this->real = this->real * c2.real;
            this->imag = this->imag * c2.imag;

            
        }

        void print() {
            cout<<real<<"+"<<imag<<"i"<<endl;
        }

    };
