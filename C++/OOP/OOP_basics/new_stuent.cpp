#include<iostream>
#include "student.cpp"
using namespace std;

int main(){
    
    Student s1(10, 100);
    Student s2(20, 200);
    Student *s3 = new Student(30, 300);

    s2 = s1; /// copy assignment operator
    *s3 = s1;
    s2 = *s3;

    delete s3;

    // s1.display();
    // s2.display();
    // s3->display();

    return 0;

}