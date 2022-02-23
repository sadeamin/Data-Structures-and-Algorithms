#include<iostream>
#include "Complex_num.cpp"
using namespace std;

int main(){
    
    int real1, imaginary1, real2, imaginary2;

    cout<<"enter value for first class:"<<endl;
    cin>>real1>>imaginary1;

    cout<<"enter value for second class:"<<endl;
    cin>>real2>>imaginary2;
    cout<<endl;

    Complex_num c1(real1, imaginary1);
    Complex_num c2(real2, imaginary2);

    string choice;
    cout<<"type a for add and m for multiply:"<<endl;
    cin>>choice;

    if (choice == "a")
    {
        c1.print();
        c2.print();
        cout<<"_________"<<endl;
        c1.plus(c2);
        c1.print();
    }

    else if (choice == "m")
    {
        c1.print();
        c2.print();
        cout<<"_________"<<endl;
        c1.multiply(c2);
        c1.print();
    }
    

    else
    {
        return 0;
    }
    

    return 0;
}