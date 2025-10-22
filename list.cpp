#include<bits/stdc++.h>
#include<iostream>
#include<list>
using namespace std;
int main(){
    int num , n;
    vector<int> a , b;
    list<int> c;
    cout << "ENTER THE NUMBER OF ELEMENTS" << endl;
    cin >> n;
    cout << "ENTER THE ELEMENTS" << endl;
    for(int i = 0 ; i < n ; i++){
        cin >> num ;
        a.push_back(num);
        c.push_back(num);
    }
    cout << "ORIGINAL VECTOR LIST" << endl;
    for(int i : a){
        cout << i << endl;
    }
    cout << "ORIGINAL LIST" << endl;
    for(int i : c){
        cout << i << endl;
    }
    c.sort();
    cout << "SORTED LIST" << endl;
    for(int i : c){
        cout << i << endl;
    }
    a.clear();
    for(int i : c){
        a.push_back(i);
    }
    for(int i : a){
        if(i<=10){
            b.push_back(i);
        }
    }
    cout << "VECTOR B : WITH ELEMENTS <= 10" << endl;
    for(int i : b){
        cout << i << endl;
    }
    return 0;
}