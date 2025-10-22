// Displaying only essential information and hiding the details.
// The capability of a class to derive property and characteristics from another class.
//              External Code       Within Class         Derived Class
//PUBLIC :         YES                 YES                  YES 
//PRIVATE :         NO                 YES                   NO
//PROTECTED :       NO                 YES                   YES
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Human{
private:
string religion ;
int bankaccno;
public :
int age;
int dob;
void accesspri(string r, int n){
    religion = r;
    bankaccno = n;
    cout << religion << endl;
    cout << bankaccno << endl;
}
Human(){
    cout << "1st Constructor" << endl;
}
};
class indian : public Human{
private :
int citino;
public :
void input(int a){
    if(a>6){
        age = a;
    }else{
        cout << "INVALID AGE" <<endl;
    }
}
void input (int b , int c){
    if(b==123){
     c = citino;
    }
}
indian(){
    cout << "2nd constructor" << endl;
}
void display (){
    cout << age << endl;
    cout << citino << endl;
}
};
int main (){
   indian i1;
   i1.input(17);
   i1.input(123, 3456);
   i1 . accesspri("HINDU",56789);
   return 0;


}
