#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
    int n;
    cin >> n;
    // vector<int> vec(n); 
    // vector<int> vec2;
    // for(int i = 0 ; i < n ; i++){
    //     cin >> vec[i];
    // }
    // for(int i = 0 ; i < n ; i++){
    //     if(vec[i]-(i+1) == 0){
    //         continue;
    //     }else{
    //     vec2.push_back(abs(vec[i] - (i+1)));
    // }
    // }
    // sort(vec2.begin(),vec2.end());
    // int result = accumulate(vec2.begin() + 1, vec2.end(), vec2[0], [](int a, int b) { 
    //     return gcd(a, b); 
    // });

    int x, ans = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        ans = gcd(ans, abs(x - i - 1));
    }
    cout << ans << endl;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}