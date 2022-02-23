#include<iostream>
#include<cstring>
using namespace std;

class Student
{

private:
    int age;

public:
    char *name;

    Student(Student const &s){
        this->age = s.age;
        // this->name = s.name;    /// shallow copy

        /// deep copying
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);

    }

    Student(int age, char *name){
        this->age = age;
        // this->name = name; // shallow copy.
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    void display() {
        cout<<name<<" "<<age<<endl;
        
    }

};


int main(){
    char name[] = "eamin";

    Student s1(14, name);
    s1.display();

    Student s2(s1);
    s2.name[0] = 'x';
    s1.display();
    s2.display();

    // Student s1(14, name);
    // s1.display();

    // name[0] = 'a';

    // Student s2(26, name);
    // s2.display();


    // s1.display();

    return 0;

}