#include<iostream>
#include "student.cpp"
using namespace std;

int main(){
    /// creating objects statically

    Student s1;
    Student s2;
    Student s3, s4, s5;

    /// creating objects dynamically
    Student *s6 = new Student;

    /// inserting value into class property.
    // s1.age = 13;
    s1.rollNumber = 100;

    s1.display();
    s2.display();

    cout<<"s1 age:"<<s1.getAge()<<endl;
    cout<<"s2 age:"<<s2.getAge()<<endl;
    

    // cout<<s1.age<<endl;
    // cout<<s1.rollNumber<<endl;
    
    // (*s6).age = 23;
    (*s6).rollNumber = 30;
    (*s6).display();

    cout<<"s6 age:"<<s6->getAge()<<endl;

    // s6->age = 23;
    s6->rollNumber = 30;

    return 0;

}
