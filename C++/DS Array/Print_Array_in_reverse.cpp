#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of array: ";

    int n;
    cin>>n;

    /// geting input
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    

    
    /// reverseing the array.
    cout<<"reverse :"<<endl;
    for (int i = n-1; i >= 0; i--)
    {
        cout<<a[i]<<" ";
    }
    

    cout<<endl;



    return 0;
}
