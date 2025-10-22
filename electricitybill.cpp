#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Electricity_bill{
    public :
    string name;
    int user_no;
    int time;
    int units;
    static int bill;
    void setdata(string name , int user_no , int time , int units){
        this->name = name;
        this->user_no = user_no;
        this->time = time;
        this->units = units;
        bill = 0;
    }
    void calculate(){
        if(units<=100){
            bill = bill + (units*1.5);
        }
        else if(units>100 && units<=200){
            bill = bill + (100*1.5) + (units-100)*1.8;        
        }
        else if(units>=300){
            bill = bill + (100*1.5) + (200*1.8) + (units-300)*2.0;
        }
        else{
            bill = 0;
        }
    }
    void display(){
        if(units > 0){
        cout << "---------------ELECTRICITY FOR " << time << "MONTHS-----------------" <<endl;
        cout << "NAME OF THE CUSTOMER ---> "<< name <<endl;
        cout << "THE USER ID OF THE CUSTOMER : "<< user_no <<endl;
        cout << "THE NO OF UNITS CONSUMED : "<<units<<endl;
        cout << "TOTAL BILL : " <<bill<<endl;
    }}
};
int Electricity_bill :: bill = 0;
int main(){
    Electricity_bill C1[10];
    for(int i = 0;i<9;i++){
    C1[i].setdata("ARYADEV CHATTERJEE",2039,4,450);
    C1[i].calculate();
    C1[i].display();

}
    return 0;
}