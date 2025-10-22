#include <bits/stdc++.h>
#include <iostream>
#define PI 3.1415
using namespace std;
class shapes{
public :
void rectangle(){
    float len , bred ;
    cout << "ENTER LENGTH OF THE RECTANGLE" << endl;
    cin >> len;
    cout << "ENTER BREADTH OF THE RECTANGLE" <<endl;
    cin >> bred;
    cout << "AREA OF THE RECTANGLE" << len*bred << endl;
}
void square(){
    float side ;
    cout << "ENTER THE SIDE OF THE SQUARE" << endl;
    cin >> side ;
    cout << "AREA OF THE SQAURE : "<< side*side << endl;
}
void circle(){
    float radius ; 
    cout << "ENTER THE RADIUS : " <<endl;
    cin >> radius;
    cout << "AREA OF THE SQUARE : " << PI * radius * radius <<endl;
}
};
int main(){
    shapes s;
    int choice ;
    while(true){
    cout << "1 ---> RECTANGLE" << endl;
    cout << "2 ---> SQUARE" << endl;
    cout << "3 ---> CIRCLE" << endl;
    cin >> choice;
    switch(choice){
        case 1 : 
        s.rectangle();
        break;
        case 2:
        s.square();
        break;
        case 3:
        s.circle();
        break;
        case 4:
        exit(0);
        default :
        cout << "INVALID CHOICE" << endl;
    }}
    return 0;
    
}