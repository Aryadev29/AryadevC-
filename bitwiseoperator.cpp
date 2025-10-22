// 1 and 2's complement
/*(7)to the base 10 === decimal format
divide 7 by 2 --> quotient 3, remainder 1
divide 3 by 2 --> quotient 1, remainder 1
when quotient reaches one stop , write it from reverse.*/
/* to convert from binary to decimal :
(1101) --> move from right to left , starting index from 0
then multiply and add --> 1*2^0 + 0*2^1 + 1*2^2 + 1*2^3 = 13
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string convert2Binary (int n)
{
    string res = " ";
    while(n!=1){
        if(n%2 == 1){
            res += '1';
        }else{
            res += '0';
        }
        n = n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}
// Time Complexity would be TC = log to the base 2 (getting divided by 2) (n)
// Space Complexity would be the same.
int convert2Decimal (string x){
    int len = x.length() ;
    int p2 = 1; int num = 0;
    for(int i = len - 1 ; i>=0 ; i++){
        if(x[i]=='1'){
           num = num + p2;
           p2 = p2*2;
        }
    }
    return num;
}
// TIME COMPLEXITY = O(len)
// SPACE COMPLEXITY = O(1)
/* 1's compliment == (13) - (1101) flip 1 to 0 and vice versa 1's compliment of (1101) --> (0010)
for 2's compliment , add 1 to the 1's compliment  (0010) 
                                            + (0001) ---> (0011) */
// XOR --> no. of 1s -> odd = 1
//         no. of 1s -> even = 0
// x = 13^7 (1101 ^ 0111) --> (1010)
// >> --> right shift operator , 
// 13 >> 2 --> 1101 >> 2 --> right se 1,0 hatt gya --> 11
// x >> k --> x / 2^k
// n = -13 , + is stored as 0 , - is stored as 1 ,integer has 32 bits , 31st place takes the sign (+ or -)
// computer first converts the binary of the positive , via 1's complement , then add 1 , by 2's complement
// in this way you get 0 or 1 at the 31st position , determining positive or negative
// the largest number interger can store
// the 31st position is reserved for the sign , from the 30th position
// 2^30 + 2^29 + 2^28 + ....... + 2^0 
// (2^31 - 1) is the largest number integer can store
// INT MAX
// -2^31 , is the minimum value integer can store
// x << k --> x*2^k , left side shift hota hai
