// Wrapping up of data & information in a single unit , while controlling access to them.(data hiding)
#include<iostream>
using namespace std;
class Customer{
    string name ;
    int balance ;
    int age;
    public :
    Customer(string a, int b, int age){
        name = a;
        if(b > 0){
        balance = b;
    }if(age > 0){
        this->age = age;
    }
}
    void deposit(int amount){
        if(amount > 0){
        balance = balance + amount;
    }else{
        cout << "INVALID AMOUNT" <<endl;
    }
}
void display (){
    cout << name << endl;
    cout << balance << endl;
    cout << age <<endl;

}
};
int main(){
    Customer A1("ROHIT" , 1000 , 7);
    A1.deposit(-20);
    A1.display();
}