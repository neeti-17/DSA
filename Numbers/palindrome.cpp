#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int num){ //TC -> O(logN + 1) and SC -> O(1)
    int revNum = 0;
    int dup = num;

    while(num > 0){
        int digit = num%10;
        revNum = (revNum * 10) + digit;
        num = num / 10;
    }

    if (dup == revNum) {
        // If equal, return true
        // indicating it's a palindrome
        return true;
    } else {
        // If not equal, return false
        // indicating it's not a palindrome
        return false;
    }
    
}
int main(){
    int num = 4554;
    bool ans = isPalindrome(num);

    if(ans){
        cout << "num is palindrome" << endl;
    }
    else{
        cout << "num is not palindrome" << endl;
    }
    return 0;

}