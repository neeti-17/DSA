#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 102003;
    int ans = 0;
    int temp = 1;

    if(n == 0){
        return 1;
    }
    while(n > 0){
       int digit = n%10;
       if(digit == 0){
        digit = 1;
       }
       ans = temp*digit + ans;
       temp = temp * 10;
       n = n/10;
    }

    cout << ans << endl;
    return 0;
}