#include<iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction(int numerator, int denominator){
        this->numerator = numerator;    /// mandatory
        this->denominator = denominator;    /// mandatory
    }

    void print() {
        cout<<numerator<<"/"<<denominator<<endl;
        
    }

    void add(Fraction const &f2) {
        int lcm = denominator * f2.denominator; /// this-> is optional
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int num = x*numerator + y*f2.numerator;

        /// store result in f1
        this->numerator = num;
        this->denominator = lcm;

        simplify();

    }

    void multiply(Fraction const &f2){
        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;
        simplify();
    }

    void simplify() {
        int gcd = 1;
        int j = min(numerator, denominator);
        for (int i = 1; i < j; i++)
        {
            if (numerator%i==0 && denominator%i==0)
            {
                gcd = i;
            }
            
        }

        /// inbuilt function for gcd =  __gcd(a, b);
        /// int c = __gcd(a, b);

        ///simplify
        numerator = numerator/gcd;
        denominator = denominator/gcd;

    }



};

