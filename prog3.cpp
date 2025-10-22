#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class shoppinglist{
    private:
    int codes[5] = {1,2,3,4,5};
    string names[5] = {"A" , "B" , "C" , "D" , "E"};
    double rates[5] = { 34.5 , 36.7 , 40.2 , 41.3 , 56.3};
    int quantity[5] = { 4 , 6 , 2 , 6};
    string name;
    int qnty;
    int rqnty;
    static float bill;
    int code;
    int items[5] = {0,0,0,0,0};
    public :
    void input(){
        cout << "ENTER YOUR NAME : ";
        getline(cin,name);
        cin.ignore();
    }
    void add_items(){
        int ch;
        cout << "1.A , 2.B , 3.C , 4.D , 5.E" << endl;
        cout << "ENTER THE CODE OF THE ITEM YOU WANT : ";
        cin >> code;
        cout << endl;
        if(code<=0 && code >5){
            cout << "WRONG CODE" << endl;
        }else{
        cout << "ENTER THE QUANTITY OF THE ITEM" ;
        cin >> qnty;
        if(qnty > quantity[code-1]){
            cout << "NOT SUFFICIENT QUANTITY LEFT" << endl;
        }else{
            cout << "ITEM ADDED SUCCESSFULLY" << endl;
            items[code-1] = qnty;
            quantity[code-1]-=qnty;
        }}
    }
    void remove_items(){
        int ch1;
        cout << "1.A , 2.B , 3.C , 4.D , 5.E" << endl;
        cout << "ENTER THE CODE OF THE ITEM YOU WANT TO REMOVE : ";
        cin >> code;
        cout << endl;
        if(code <= 0 && code > 5){
            cout << "WRONG CODE" << endl;
        }else{
        cout << "ENTER THE QUANTITY OF THE ITEM YOU WANT TO REMOVE" ;
        cin >> qnty;
        if(qnty > items[code-1]){
            cout << "NOT SUFFICIENT QUANTITY ADDED" << endl;
        }else{
            cout << "ITEM REMOVED SUCCESSFULLY" << endl;
            items[code-1] -= qnty;
            quantity[code-1]+=qnty;
        }}
    }
    void calculate(){
        for(int i = 0 ; i<5 ; i++){
            bill = bill + rates[i] * items[i];
        }
    }
    void display(){
        cout << "NAME OF THE CUSTOMER : " << name << endl;
        cout << "ITEMS BROUGHT :::>> " << endl;
        for(int i = 0 ; i < 5; i++){
            cout << codes[i] << "-->" << names[i] << "--->" << "QUANTITY = " << items[i] << endl;
        }
        cout << "TOTAL BILL ---->" << bill << endl;
    }

};
float shoppinglist :: bill = 0;
int main(){
    shoppinglist s;
    cout << "1. INPUT NAME , 2. ADD ITEMS , 3. REMOVE ITEMS , 4. CALCULATE BILL , 5. DISPLAY THE BILL , 6. EXIT" << endl;
    int n;
    while (true){
        cout << "\nEnter your choice: ";
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer
        switch(n)
        {
            case 1 :
                s.input();
                break;
            case 2 : 
                s.add_items();
                break;
            case 3:
                s.remove_items();
                break;
            case 4:
                s.calculate();
                break;
            case 5:
                s.display();
                break;
            case 6:
                return 0;
            default :
                cout << "ENTER VALID CHOICE" << endl;
        }
    }
}