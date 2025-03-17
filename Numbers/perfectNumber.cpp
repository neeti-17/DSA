#include<bits/stdc++.h>
using namespace std;

// We can use this elegant mathematical property that if n is divisible by k, then n will be also divisible by (n/k).
// For example, 28 is divisible by 4, also 28 is divisible by (28/4)=7
bool isPerfect(int n){ //O(sqrt(N))
    int sum =0;
    for(int i = 1; i*i <= n; i++){ // loop from 1 to sqrt(n)
        if(n%i==0)
            if(i*i==n || i==1)
                sum =sum + i;
            else sum = sum+ i + n/i; // we will add i and n/i by the above mentioned property
    }
    if(sum == n){
        return true;
    }
    else{
        return false;
    }
}
// bool isPerfect(int num){ //O(N)
//     int sum = 1;
//     for(int i=2; i<=num-1; i++){
//         if(num % i == 0){
//             sum += i;
//         }
//     }
//     if(sum == num){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
int main(){
    int n = 6;
    bool ans = isPerfect(n);
    if(ans){
        cout << "it is a perfect number" << endl;
    }
    else{
        cout << "it is not a perfect number" << endl;
    }
    return 0;
}