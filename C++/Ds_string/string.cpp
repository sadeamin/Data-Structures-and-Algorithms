#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    string s = "sad";

    // cout<<s<<endl;

    string s2;
    s2 = "eamin";
    // cout<<s2<<endl;

    string *sp = new string;
    *sp = "mno";

    // cout<<sp<<endl;
    // cout<<*sp<<endl;

    vector<string> v;
    // v.push_back(s);
    // v.push_back("hello");
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<endl;
    //     sort(v[i].begin(), v[i].end());
    //     cout<<v[i]<<endl;
        
    // }
    
    string s3;
    // getline(cin, s3);
    // cout<<s3<<endl;

    s3 = "eamin hi";
    // cout<<s3[0]<<endl;
    s3[0] = 'd';
    // cout<<s3<<endl;
    
    
    string s4 = s3 + s2 + "hello";
    // cout<<s4<<endl;
    // cout<<s4.size()<<endl;
    // cout<<s4.length()<<endl;

    cout<<s4.substr(3)<<endl;
    cout<<s4.substr(3, 5)<<endl;
    string s5 = s4.substr(3, 5);
    cout<<s5<<endl;
    
    cout<<s4.find("in")<<endl;
    
    int a = 123;
    string s6 = to_string(a);
    
    cout<<s6<<endl;
    s6[1] = '4';
    cout<<s6<<endl;
    
    s6.push_back('5');
    cout<<s6<<endl;
    a = atoi(s6.c_str());
    cout<<a<<endl;
    

    return 0;
}
