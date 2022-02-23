#include<iostream>
#include<cstring>
using namespace std;

bool mystrcmp(char str1[], char str2[]){
    if (strlen(str1) != strlen(str2)) return false;

    for (int i = 0; str1[i] != '\0' ; i++)
    {
        if (str1[i] != str2[i]) return false;
        
        
    }
    return true;

}


void my_strcpy(char str1[], char str2[]){
    for (int i = 0; i <= strlen(str2); i++)
    {
        str1[i] = str2[i];
    }
    
}


void my_strncpy(char str1[], char str2[], int len){
    for (int i = 0; i <= len-1; i++)
    {
        str1[i] = str2[i];
    }
    
}



void my_strcat(char str1[], char str2[]){

    int n = strlen(str1);
    int m = strlen(str2);

    for (int i = 0; i <= m; i++)
    {
        str1[i+n] = str2[i];
    }
    
}



int main()
{
    
    char str1[100] = "abcd";
    char str2[100] = "helloworld";
    // cin>>str1>>str2;


    /// next inbuilt function "strcmp()". it's return tow string's comprison.

    // if (strcmp(str1, str2) == 0)
    // {
    //     cout<<"equal"<<endl;
    // }else
    // {
    //     cout<<"not equal"<<endl;

    // }

    ///
    
    /// my own function

    // if (mystrcmp(str1, str2))
    // {
    //     cout<<"equal"<<endl;
    // }else
    // {
    //     cout<<"not equal"<<endl;

    // }

    ///

    
    /// first inbuilt function "strlen()". It's return the length of a str array.

    // int len = strlen(str1);
    // cout<<len<<endl;

    ///




    // cout<<"Before copying :"<<endl;
    // cout<<"str1 :"<<str1<<endl;
    // cout<<"str2 :"<<str2<<endl;

    /// next inbuilt function "strcpy()". copy a string's content to another string.

    // my_strcpy(str1, str2);

    // ///
    // cout<<"after copying :"<<endl;
    // cout<<"str1 :"<<str1<<endl;
    // cout<<"str2 :"<<str2<<endl;


    // cout<<"Before copying :"<<endl;
    // cout<<"str1 :"<<str1<<endl;
    // cout<<"str2 :"<<str2<<endl;

    /// next inbuilt function "strncpy()". copy a string's content to another string.

    // strncpy(str1, str2, 3);

    ///
    // cout<<"after copying :"<<endl;
    // cout<<"str1 :"<<str1<<endl;
    // cout<<"str2 :"<<str2<<endl;

    /// the function are
    /// 1) strlen()
    /// 2) strcmp()
    /// 3) strcpy()
    /// 4) strncpy()
    /// 5) strcat()

    cout<<"Before concart :"<<endl;
    cout<<"str1 :"<<str1<<endl;
    cout<<"str2 :"<<str2<<endl;

    /// next inbuilt function "strncpy()". copy a string's content to another string.

    my_strncpy(str1, str2, 2);

    ///
    cout<<"after concat :"<<endl;
    cout<<"str1 :"<<str1<<endl;
    cout<<"str2 :"<<str2<<endl;

    return 0;
}

