#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
    int n , q;
    cin >> n >> q;
    vector<int> vec(n);
    for(int i = 0 ; i < n ; i++){
        cin >> vec[i];
    }
    int l,r,k; 
    cin >> l >> r >> k;
    int sum = [(r-l)+1] * k;
    for(int i = 0 ; i < l-1 ; i++){
        sum = sum + vec[i];
    }
    for(int i = r+1 ; i <= n ; i++){
        sum = sum + vec[i-1];
    }
    if(sum%2!=0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}