// It is an instance member function that is invoked automatically
// when an object is going to be destroyed
// It is a last funcn that is to be called when an object is destroyed
// Releases the memory locations dynamically given to constructor
// Constructor is called in order
// Destructor is called in reverse;
#include <iostream>
using namespace std;
class Customer{
    string name;
    int *balance;
public:
    Customer() {
        name = "4";
    }
    Customer(string name , int bal){
        this -> name = name;
        balance = new int;
        *balance = bal;
        cout << "CONSTRUCTOR IS " << name << endl;
    }
    // Destructor (no arguments)
    ~Customer(){
       delete balance ;
       cout << "Destructor is called" << name <<endl;
    }
};
int main(){
    Customer A1 ( "1" , 1000);
    Customer A2 ("3",2000);
    Customer *A4 = new Customer;

}