#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int num){  //O(log10N + 1) 
    int originalNum = num;
    int sum = 0;
    int cnt = 0;

    // Count the number of digits
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        cnt++;
    }

    // Calculate the sum of digits raised to the power of the number of digits
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, cnt);
        temp /= 10;
    }

    // Return true if the sum is equal to the original number
    return sum == originalNum;
}

int main(){
    int n = 153;
    bool ans = isArmstrong(n);
    if(ans){
        cout << "it is armstrong" << endl;
    }
    else{
        cout << "it is not armstrong" << endl;
    }
    return 0;
}