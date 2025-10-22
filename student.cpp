#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Student{
    public :
    string name;
    vector<float> vec;
    float average;
    int mini;
    static int roll_no;
    void setdata(){
        vec.resize(3);
        cout << "ENTER THE NAME OF THE STUDENT ---> " <<endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        getline(cin, name);
        cout << "ENTER THREE TEST MARKS OF THE STUDENT --->" << endl;
        for(int i = 0; i<3 ;i++){
            cin >> vec[i];
        }
        sort(vec.begin(),vec.end());
        roll_no++;
    }
    void calculate(){
       average = (vec[1]+vec[2])/2.0;
    }
    void display(){
        cout<<"NAME OF THE STUDENT ---> " << name << endl;
        cout<<"The test marks are : " << vec[0] << "," << vec[1] << "," << vec[2] <<endl;
        cout << "ROLL NO : " << roll_no << endl;
        cout << "THE AVERAGE OF THE BEST TWO : " << average << endl;
    }
};
int Student::roll_no = 0;
int main(){
    Student s1[3];
    for(int i = 0 ; i < 3 ; i++){
        s1[i].setdata();
        s1[i].calculate();
        s1[i].display();
    }
    return 0 ;
}