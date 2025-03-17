#include<bits/stdc++.h>
using namespace std;


int findGcd(int a, int b) { //O(min(N1,N2))
    // Continue loop as long as both
    // a and b are greater than 0
    while(a > 0 && b > 0) {
        // If a is greater than b,
        // subtract b from a and update a
        if(a > b) {
             // Update a to the remainder
             // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else {
            // Update b to the remainder
            // of b divided by a
            b = b % a; 
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if(a == 0) {
        return b;
    }
    // If a is not 0,
    // return a as the GCD
    return a;
}
int main(){
    int n1 = 12;
    int n2 = 9;
    int l = min(n1,n2);
    int gcd = findGcd(n1,n2);

    // for(int i=1;i<=l ;i++){
    //    if(n1%i == 0 && n2%i == 0){
    //     gcd = i;
    //    }
    // }

    cout << gcd << endl;
    return 0;
}