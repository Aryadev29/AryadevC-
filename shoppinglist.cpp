#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Items{
    public :
int codes[5]={1,2,3,4,5};
string names[5]={"A","B","C","D","E"};
int rates[5]={34,35,36,37,38};
int quantity[5]={0};
float totals[5]={0.0};
int code;
int qty;
int n;
string name;
float bill;
void input(){
cout << "ENTER YOUR NAME" <<endl;
cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer before getline
getline(cin, name);
}
void show(){
for(int i = 0; i < 5 ; i++){
cout << codes[i] << "--->" << names[i] << "," << "Price : Rs" <<rates[i] <<endl;
}
}
void addItem(){
cout << "Enter Codes ( 1 - 5 )"<<endl;
cin >> code;
if(code>=1 && code<=5){
int i = code  - 1;
cout << "ENTER NUMBER OF QUANTITY" << endl;
cin >> qty;
quantity[i]+= qty;
totals[i]= quantity[i]*rates[i];
}}
void removeItem(){
cout << "Enter Codes ( 1 - 5 )"<<endl;
cin >> code;
if(code>=1 && code<=5){
int i = code  - 1;
cout << "ENTER NUMBER OF QUANTITY" << endl;
cin >> qty;
quantity[i] = max(0,quantity[i]-qty);
totals[i]= quantity[i]*rates[i];
}}
void bill1(){
for(int i = 0 ; i < 5 ; i++){
bill = bill + totals[i];}
cout << "BILL : " << bill << endl;

}
void display(){
cout << "----------------------SHOPPER'S POINT-------------------------" << endl;
cout << "NAME OF THE CUSTOMER ------------------> " << name << endl;
cout << "ITEMS.............................." << endl;
for(int i = 0 ; i < 5; i++){
cout << "a)" << "CODE-> " <<codes[i] <<"| "  << " NAME OF THE PRODUCT : "<<"| "  << names[i]<<"| "  << "RATE OF THE PRODUCT : "<<"| "  << rates[i]<<"| "  << "NO OF QUANTITIES BOUGHT : "<<"| "  << quantity[i]<<"| "  << "TOTAL PRICE OF THIS : "<<"| "  << totals[i] << endl;
}
cout << "THE TOTAL BILL : "<< bill <<endl;
}
void shop(){
while(true){
cout << "Enter Your Choice : " << endl;
cout << "1 --> ADD AN ITEM" << endl;
cout << "2 --> REMOVE AN ITEM" << endl;
cout << "3 --> BILL" << endl;
cout << "4 --> Display" << endl;
cout << "5 --> EXIT" << endl;
cin >> n;
switch(n)
{
case 1:
addItem();
break;
case 2:
removeItem();
break;
case 3:
bill1();
break;
case 4:
display();
return;
default:
cout<<"Enter Valid Choice\n";
break;

}
}
}
};
int main(){
Items I1;
I1.input();I1.show();
I1.shop();
return 0;
}






