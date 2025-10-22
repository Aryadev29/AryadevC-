#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<char> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<char> b(m);
    for(int i = 0 ; i < m ; i++){
        cin >> b[i];
    }
    vector<char> c(m);
    for(int i = 0 ; i < m ; i++){
        cin >> c[i];
        if(c[i]=='D'){
            a.push_back(c[i]);
        }else{
            a.insert(a.begin(),b[i]);
        }
    }
    for(char ch:a){
        cout << ch ;
    }

    
}
int main(){
   int t;
   cin >> t;
   while(t--){
    solve();
   }
}