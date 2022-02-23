#include<iostream>
using namespace std;

int main()


{
    cout<<"Enter the size of array: "<<endl;
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int start = 0;
    int end = n-1;
    while (start <= end)
    {
        swap(a[start], a[end]);

        start++;
        end--;
    }
    
    cout<<"After reverse : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl;


    return 0;
}



