// They are attribute of classess or class member 
// It is declared using static keyboard
// Only one copy of tha member is created for the entire class and is shared by all the objects
// It is initialized before any object of this class in created
// Static member function ->  can access the static variable irrespective of the access specifier

#include <iostream>
using namespace std;
class Customer{
    public:
    string name ;
    int acc_num , balance;
    static int total_balance;
    static int total_customer;
    public :
    Customer(string a, int b, int c){
        name = a;
        acc_num = b;
        balance = c;
        total_customer++;
        total_balance += balance;
    }
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            total_balance+=amount;
        }
    }
    void withdrawl(int amount){
        if(amount <= balance && amount > 0){
            balance = balance - amount;
            total_balance = total_balance - amount;
        }
    }    
    static void acceStatic(){
        cout << total_customer << endl;
    }
    void display() {
        cout << total_customer << endl;
    }
};
int Customer :: total_customer = 0;
int Customer :: total_balance = 0;
int main(){
    Customer A1("ROHIT" , 1 , 1000);
    Customer A2("MOHIT" , 2 , 3000);
    // Customer :: total_customer = 7;
    // A2.display();
    // A2.acceStatic();
}