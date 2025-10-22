#include<iostream>
using namespace std;
class MyException{
protected :
string msg;
public :
MyException(string msg){
    this->msg=msg;
}
string what() const {
    return msg;
}
};
class my_runtime_error : public MyException{
public:
    my_runtime_error(const char* msg) : MyException(msg) {}
};
class InvalidAmountError : public my_runtime_error{
public:
    InvalidAmountError(const char* msg) : my_runtime_error(msg) {}
};
class InsufficientBalanceError : public my_runtime_error{
public:
    InsufficientBalanceError(const char* msg) : my_runtime_error(msg) {}
};


class Customer{
    public : 
    string name;
    int balance;
    int amount;
    Customer(string name , int balance , int amount){
        this->name = name;
        this->balance = balance;
        this->amount = amount;
    }
    void deposit(int a){
        if(a>0){
            cout << "Deposit Successfull !!" << endl;
            balance+=a;
        }else{
            throw InvalidAmountError("INVALID AMOUNT");
        }
    }
    void withdrawl(int b){
        if(b<=balance){
            cout << "Withdrawl successful!!" << endl;
            balance-=b;
        }else{
            throw InsufficientBalanceError("INSUFFICIENT BALANCE");
        }
    }
};
int main(){
    Customer C1("ARYADEV" , 100 , 56);
    try{
        C1.deposit(70);
        C1.withdrawl(780);
    }
    catch(const InsufficientBalanceError &e){
        cout << e.what() << endl;
    }
    catch(const InvalidAmountError &e){
        cout << e.what() << endl;
    }
}
