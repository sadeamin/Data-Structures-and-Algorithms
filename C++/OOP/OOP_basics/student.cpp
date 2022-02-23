#include<iostream>
using namespace std;

class Student{


        int age;
    public:

        /// default constructor
        Student () {
            cout<<"Constructor called"<<endl;
            
        }

        /// parameteried Constructor
        Student(int rollNumber){
            cout<<"Constructor 2 called"<<endl; 
            this->rollNumber = rollNumber;
            
        }

        Student(int a, int r){
            
            cout<<"this :"<<this<<endl;
            
            cout<<"Constructor 3 called"<<endl;

            age = a;
            rollNumber = r;
        }


        int rollNumber;
        void display(){
            cout<<"age "<<age<<endl;
            cout<<"rollNumber "<<rollNumber<<endl;
            
        }

        int getAge(){
            return age;
        }


        void setAge(int a) {
            if (a<0)
            {
                return;
            }
            
            age = a;
        }

    ~ Student(){  /// our destructor will be called.
        cout<<"Destructor called"<<endl;
        
    }

};

