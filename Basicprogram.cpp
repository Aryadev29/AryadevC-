#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
    // Declare a variable to hold the input number
    int n;

    // Prompt the user for input
    cout << "Enter a number: ";
    
    // Read the input number
    cin >> n;

    // Check if the number is even or odd
    if (n % 2 == 0) {
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
    }

    return 0;
}