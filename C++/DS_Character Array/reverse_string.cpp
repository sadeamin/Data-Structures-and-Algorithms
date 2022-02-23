#include<iostream>
using namespace std;


/// creating length counting function.

int length(char input[]){
    int count = 0;
    /// counting using for loop
    for (int i = 0; input[i] != '\0'; i++)
    {   
        count++;
    }

    /// return th count variable
    return count;
    
}

///


/// creating the reverse function.
void reverse(char input[]){
    int s = 0;
    int e = length(input) - 1;

    while (s < e)
    {
        swap(input[s], input[e]);
        s++;
        e--;
    }
    
}



int main()


{
    cout<<endl;
    
    char name[100];
    cout<<"Enter your name: ";
    cin.getline(name, 100);

    // name[1] = '\0';
    // name[3] = 'd';
    // name[4] = 'x';


    cout<<"Your name is "<<name<<endl;

    /// calling the reverse function.
    reverse(name);

    cout<<"Reversed string: "<<name<<endl;



    ///calling the function
    // cout<<"Length: "<<length(name)<<endl;


    return 0;


 
}


