#include<bits/stdc++.h>
using namespace std;

// for reversing
// int main(){ //O(LogN)
//     int n = 247; 
//     int ans = 0;
//     while(n > 0){
//         int digit = n % 10;
//         ans = (ans * 10) + digit;
//         n = n / 10;
//     }
//     cout << ans << endl;
//     return 0;
// }


// for max and min digit in number - > O(LogN)
int main(){
    int n = 2746;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    while( n > 0){
        int digit = n % 10;
        mini = min(digit,mini);
        maxi = max(digit,maxi);
        n = n /10;
    }
    cout << maxi << endl;
    cout << mini << endl;
    return 0;
}
