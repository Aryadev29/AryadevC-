// not the most optimized algorithm , still need to learn for basics
// smaller element pushed to front
#include<iostream>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int index = 0 ;
    for(int i = 0 ; i < n-1 ; i++){
        index = i;
        for(int j = i+1 ; j < n ; j++){
            if(arr[j]<arr[index]){
                index = j ;
            }
        }
        swap(arr[i] , arr[index]);
    }
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
}
int main(){
    int t ; 
    cin >> t;
    while(t--){
        solve();
    }
}