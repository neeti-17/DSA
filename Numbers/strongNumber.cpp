#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    return num * factorial(num-1);
}
bool isStrong(int n){ //O(N*M)
    int sum = 0;
    int oriNum = n;
    while(n > 0){
        int digit = n % 10;
        int fact = factorial(digit);
        sum = sum + fact;
        n = n /10;
    }
    if(sum == oriNum){
        return true;
    }
    else{
        return false;
    }
}
bool isAutomorphic(int n){
    int square = n * n;
    while(n > 0){
        if(n%10 != square% 10){
            return false;
        }
        n = n/10;
        square = square / 10;
    }
    return true;
}
int main(){
    int n = 76;
    // if(isStrong(n)){
    //     cout <<  true << endl;
    // }
    // else{
    //     cout << false << endl;
    // }
    if(isAutomorphic(n)){
        cout << "it is automorphic" << endl;
    }
    else{
        cout << "it is not automorphic" << endl;
    }
    return 0;
}