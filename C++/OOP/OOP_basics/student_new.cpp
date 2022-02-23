#include<iostream>
#include "student.cpp"
using namespace std;

int main(){
    
    // Student s1(10, 100);
    // cout<<"Address of s1 "<<&s1<<endl;

    // Student s2(20, 200);
    // cout<<"Address of s2 "<<&s2<<endl;
    
    Student s1(10, 100); ///parameterised constructor will called
    cout<<"s1 :"<<endl;
    s1.display();

    Student s2(s1); /// copy constructor
    cout<<"s2 :"<<endl;
    s2.display();

    Student *s3 = new Student(20, 200);
    cout<<"s3"<<endl;
    s3->display();

    Student *s4 = new Student(*s3);
    cout<<"s4"<<endl;
    s3->display();


    // Student s1;
    // s1.display();
    // Student s2;
    // s2.display();
    // Student *s3 = new Student;
    // s3->display();

    // Student s4(10);
    // s4.display();

    // Student *s5 = new Student(120);
    // s5->display();

    // Student s6(10, 100);
    // s6.display();

    // s1.setAge(20);
    // s2->setAge(30);



    return 0;

}