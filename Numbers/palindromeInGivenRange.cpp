#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int num){ //O(N)
        int revNum =0;
        int dup = num;

        while(num > 0){
            int digit = num % 10;
            int revNum = (revNum *10) + digit;
            num = num / 10;
        }

        if(dup == revNum){
            return true;
        }else{
            return false;
        }
}
int main(){
    int min = 10;
    int max = 50;

    for(int i=min;i<max;i++){
        if(isPalindrome(i)){
           cout << i << endl;
        } 
    }

    return 0;
}