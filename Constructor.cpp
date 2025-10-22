//It is a special function that is invoked automatically at the time of
// object creation
// Name of the constructor should be same as class name
// It doesn't have any return type
// It is used to initialize the value
#include<iostream>
using namespace std;
class Customer{
    string name;
    int account_number;
    int balance;
    int* roi;
    public :
    //DEFAULT CONSTRUCTOR
    Customer(){
        cout << "Hello Constructor" <<endl;
        roi = new int[100];
    }
    //Parameterised Constructor
    Customer(string name , int acccount_number , int balance){
        this -> name = name; //this stores the address of the name of class customer
        (*this).account_number = account_number;
        this -> balance = balance;
    }
    // Constructor overloading : Name of the functions are same but parameters are different
    Customer ( string a , int b){
        name = a;
        account_number = b;
        balance = 50;
    }
    // INLINE CONSTRUCTOR
    //inline Customer (string a , int b , int c) : name(a),account_number(b),balance(c);
    Customer(Customer &B){
        name = B.name ;
        account_number = B.account_number;
        balance = B.balance;
    }
    void display(){
        cout << name << endl;
        cout << account_number << endl;
        cout << balance << endl;
    }
    
};
int main (){
    Customer A1 ("ROHIT" , 1234 , 4567);
    A1.display();
    Customer A2 ("ARYA", 5678);
    A2.display();
    Customer A3(A2);
    A3.display();
    Customer A4;
    A4 = A2;
    A4 . display();
}
