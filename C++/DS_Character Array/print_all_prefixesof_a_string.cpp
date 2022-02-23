#include<iostream>
#include<cstring>
using namespace std;

void str_prefix(char str[]){

    for (int e = 0; str[e] != '\0'; e++)
    {
        for (int s = 0; s <= e; s++)
        {
                cout<<str[s];
        }
        cout<<endl;
    }
    
}

void str_suffix(char str[]){

    cout<<str[3]<<endl;
    for (int s = strlen(str)-1; s <= strlen(str)-1; s--)
    {
        cout<<s;

        // for (int e = strlen(etr)-1; e <= e; e++)
        // {
        //     cout<<str[e];
        // }
        // cout<<endl;
    }
    
}


int main()
{
    
    char str[] = "abcd";

    str_suffix(str);

    return 0;
}
