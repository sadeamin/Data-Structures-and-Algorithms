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

int main()


{
    
    char name[100];
    cout<<"Enter your name: ";
    cin.getline(name, 4);

    // name[1] = '\0';
    // name[3] = 'd';
    // name[4] = 'x';


    cout<<"Your name is "<<name<<endl;

    ///calling the function
    cout<<"Length: "<<length(name)<<endl;
    return 0;



}


