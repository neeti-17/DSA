#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){ //O(2^N)
    if( n == 0){
        return 0;
    }
    if( n == 1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int factorial(int n){ //O(N)
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}
double square(int n, int x){ //O(logN)
    // At each step of the loop, we check whether the current exponent is even or odd.
    // If the exponent is even, we square the base as x^n = (x^2)n/2.
    // If the exponent is odd, the algorithm multiples the result by the base as x^n = x(x^n-1).
    double ans = 1;
    // Store the original value of 'n'
    double oriNum = n;
    
    // If the base is 0 or 1,
    // return the base itself
    if(x == 0){
        return 1;
    }
    if(x==1){
        return x;
    }
    
    // Loop to compute the
    // result iteratively
    while(n>0){
        // If 'n' is odd, multiply
        // 'ans' by 'x' and
        // decrement 'n' by 1
        if(n%2==1){
            ans = ans*x;
            n = n-1;
        }
        // If 'n' is even, divide
        // 'n' by 2 and multiply
        // 'x' by itself
        else{
            n = n/2;
            x = x*x;
        }
    }
    // Return the final result
    if(oriNum < 0){ // if power is negative
        return 1.0/ans;
    }
    else{   
        return ans;
    }

}
bool isPrime(int n){
    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){ 
        if(n % i == 0){ 
            cnt = cnt + 1;
            if(n / i != i){
                cnt = cnt + 1;
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
int factors(int n){

    // for(int i=1; i<=n;i++){ //O(n)
    //     if(n%i == 0){
    //         cout << i << endl;
    //     }
    // }

    //or 
    for(int i=1; i<=sqrt(n); i++){ //O(sqrt(n))
        if(n % i ==0){
            if(n/i == i){ // If divisors are equal, print only one
                if(isPrime(i)){
                   cout << i << endl;
                }
            }
            else{
                if(isPrime(i)){
                   cout << i << "," << n/i << endl;  // print both
                }
            }
        }
    }
}
vector<int> getPrimeFactors(int n){ 
    // Declare a vector to store
    // the prime factors of n.
    vector<int> primeFactors; 
    
    // Loop from 2 up to n
    for(int i = 2; i <= n; i++){
        // Check if n is divisible by i
        if(n % i == 0){
            // If divisible, add i to
            // the primeFactors vector
            primeFactors.push_back(i);
        }
        // Continue dividing n by i
        // until it's no longer divisible
        while(n % i == 0){
            n = n / i;
        }
    }
    // Return the vector
    // containing the prime factors of n.
    return primeFactors; 
}

int main(){
    int n = 6;
    // int x = 3;
    // cout << factorial(n) << endl;
    // cout << fibonacci(n) << endl;
    // cout << square(n,x) << endl;
    vector<int> ans = getPrimeFactors(n);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << endl;
    }
    return 0;
}