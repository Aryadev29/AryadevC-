// OBJECT ORIENTED PROGRAMMING : It is an approach in programming pattern where the programs are structured 
//                               around objects rather than function and logic.
// CLASS : it is a user defined data type 
// Blueprint for creating objects
// OBJECT : IT IS AN ENTITY THAT HAS A STATE AND BEHAVIOUR ANYTHING THAT EXIST IN PHYSICAL WORLD
// OBJECT HAS SIZE , CLASS DO NOT HAVE SIZE
// STATIC VS DYNAMIC MEMORY ALLOCATION 
// two types of memory - heap (larger) and stack (smaller)
// int *p = new int; - creates a memory box of int data type in heap and stores the address of that box in p.
// *p = 10; - access the box in heap and stores the value in it.
// Student *s = new Student - creates a memory space in heap of data type class student and stores the address in s
// (*s).name = "ROHIT" -> access the name object of student class
// s -> name = "ROHIT" - same meaning as above
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Student{
    // If accesse modifier is not written - by default private , no one outside the class can access.
    //public : // everyone can access
    private :
    string name;
    int roll;
    int age;
    string grade;
    // Function getter and setter 
    // to access variables declared in private
    public:
     void setname(string n){
        // if(n.size == 0){
        //     cout << "INVALID NAME" <<endl;
        //     return ;
        // }
        name = n;
     }
     void setage(int a){
        age = a;
     }
     void setroll(int b){
        roll = b;
     }
     void setgrade (string m){
        grade = m;
     }
     void getgrade (){
        std::cout << grade << std::endl;
     }
     void getname (int pin){
        if(pin == 123){
        cout << name << endl;
     }else{
        cout << "INVALID PIN" <<endl;
     }}
     void getage (){
        cout << age << endl;
     }
     void getroll (){
        cout << roll << endl;
     }
    //  int getroll1(){
    //     return roll;
    //  }
    void display(){
        cout << name << endl;
        cout << roll << endl;
        cout << age  << endl;
        cout << grade << endl;

    }
};
int main(){
    // Student s1;
    // Data type (class) variable (object)
    // s1.name = "ARYA";
    // s1.roll = 12;
    // s1.age = 18;
    // s1.grade = "Ninth";
    // s1.display();
    // s1.setname("ROHIT");
    // s1.setgrade("THIRD");
    // s1.setage(12);
    // s1.setroll(03);
    // s1.getname(789);
    // s1.getgrade();
    // s1.getage();
    // s1.getroll();
    // cout << s1.getroll1 <<endl;
    Student *S = new Student;
    S->setname("ARYA");
    S->setage(34);
    S->setgrade("A+");
    S->getgrade();
    S->getage();

}