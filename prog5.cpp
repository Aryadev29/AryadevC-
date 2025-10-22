#include<bits/stdc++.h>
#include<iostream>
#define PI (3.14)
using namespace std;
class shape{
    public:
    float area;
    virtual void input() = 0;
    virtual float calculate() = 0;
};
class Circle : public shape{
public :
float r;
Circle();
void input(){
    cout << "ENTER THE RADIUS : " ;
    cin >> r;
}
float calculate(){
    area = PI * r * r;
    return area;
}
};shape *s;
s = &r;
s = &c;
s