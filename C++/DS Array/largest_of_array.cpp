#include<iostream>
using namespace std;

int main()
{
    
    
    cout<<"Enter the number of array:"<<endl;
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    


    int largest = a[0];

    int smallest = a[0];


    // int largest = INT_MIN;

    // int smallest = INT_MAX;



    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }

        if (a[i] < smallest)
        {
            smallest = a[i];
        }
        
    }







    cout<<"largest value :"<<largest<<endl;

    cout<<"smallest :"<<smallest<<endl;



    return 0;
}
