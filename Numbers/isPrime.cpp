#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){  //O(sqrt(N))where N is the input number
    if(n == 1) return false;
    int cnt =0;
    for(int i=2; i<= sqrt(n); i++){
        if(n % i ==0){
            cnt++;
            // If n is not a perfect square,
            // count its reciprocal factor.
            if(n / i != i){
                cnt = cnt++;
            }
        }
    }
    if(cnt == 2){
        return true;
    }
    else{
        return false;
    }
}
// This is because if n has a factor greater than its square root, it must also have a factor smaller than its square root.


// bool isPrime(int n){ //O(N)
//     int cnt = 0;
//     for(int i=1; i<=n;i++){
//        if(n % i == 0){
//         cnt++;
//        }
//     }
//     if(cnt == 2){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
int main(){
    int n = 13;
    bool ans = isPrime(n);
    if(ans){
        cout << "it is prime" << endl;
    }
    else{
        cout << "it is not prime" << endl;
    }
    return 0;
}