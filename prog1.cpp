#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class elecbill{
    private:
    string name;
    int units;
    double bill ;
    static int total_bill ;
    public :
    void getinput (){
        cin.ignore();
        cout << "ENTER THE NAME :" << endl;
        getline (cin,name) ;
        cout << "ENTER THE NO OF UNITS :" << endl;
        cin >> units ;
    }
    void calculate(){
        if(units == 0){
            bill = 50 ;
            total_bill = total_bill + bill;
        }
        else if(units>0 && units<=100){
            bill = 50 + 1.50*units;
            total_bill = total_bill + bill;
        }
        else if(units > 100 && units<=200){
            bill = 50 + 100*1.50 + (units-100)*1.80;
            total_bill = total_bill + bill;
        }
        else if(units > 200){
            bill = 50 + 100*1.50 + 100*1.80 + (units-200)*2.50;
            total_bill = total_bill + bill;
        }
        if(bill > 300){
            bill = 300 + 0.15*300 ;
            total_bill = total_bill + bill;
        }
    }
    void output(){
        cout << "NAME OF THE CUSTOMER : "<< name << endl;
        cout << "TOTAL UNITS CONSUMED : "<< units << endl;
        cout << "TOTAL BILL OF THE CUSTOMER : "<< bill << endl;
        cout << "TOTAL ELECTRIC BILL COLLECTED : "<< total_bill << endl;

    }
};
int elecbill :: total_bill = 0;
int main(){
    elecbill e[100];
    int cnt;
    cout << "ENTER THE TOTAL NUMBER OF CUSTOMERS : " ;
    cin >> cnt;
    for(int i = 0 ; i < cnt ; i++){
        e[i].getinput();
        e[i].calculate();
        e[i].output();
    }
    return 0;

}