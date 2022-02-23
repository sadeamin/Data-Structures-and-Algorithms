#include<iostream>
using namespace std;

int main()
{
    
    /// initializing variables.
    int a, b, temp;
    /// printing
    cout<<endl;
    cout<<"type the value of a: ";
    /// get input from user.
    cin>>a;
    
    cout<<"type the value of b: ";

    cin>>b;

/// swaping the values.
    // temp = a;

    // a = b;
    // b = temp;

    // alternativ
    // a = a^b;
    // b = a^b;
    // a = a^b;

    // alternativ
    swap(a, b);


/// 

    ///printing 
    cout<<endl;
    cout<<"Arfter swapping : "<<endl<<"a = "<<a<<" b = "<<b<<endl;

    cout<<endl;

    return 0;
}
