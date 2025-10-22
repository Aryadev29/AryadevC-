#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int maths_marks;
    int physics_marks;
    int chemistry_marks;
    double avg;
    static int roll_number;
    public:
    void input(){
        cout << "ENTER THE NAME : " ;
        getline(cin,name);
        roll_number++;
        cout << "ENTER MATHS MARKS : " ;
        cin >> maths_marks;
        cout << "ENTER PHYSICS MARKS : " ;
        cin >> physics_marks;
        cout << "ENTER CHEMISTRY MARKS : " ;
        cin >> chemistry_marks;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer for next getline
    }
    void calculate(){
        vector<int> vec = {maths_marks , physics_marks , chemistry_marks};
        sort(vec.begin() , vec.end());
        avg = (vec[1]+vec[2])/2.0;
    }
    void display(){
        cout << "NAME OF THE STUDENT : " << name << endl;
        cout << "MATHS MARKS : " << maths_marks << endl;
        cout << "PHYSICS MARKS : " << physics_marks << endl;
        cout << "CHEMISTRY MARKS : " << chemistry_marks << endl;
        cout << "AVERAGE : " << avg << endl;
        cout << "ROLL NO : " << roll_number << endl;

    }
};
int Student :: roll_number = 0;
int main(){
    Student s[100];
    int cnt;
    cout << "Enter number of students: ";
    cin >> cnt;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer before first getline
    for(int i = 0 ; i < cnt ; i++){
        s[i].input();
        s[i].calculate();
        s[i].display();
    }
    return 0;
}