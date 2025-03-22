#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s){ //O(N) and O(1)
    int left=0;
    int right = s.size()-1;

    while(left < right){
        if(!isalnum(s[left])) 
            left++;
        else if(!isalnum(s[right])) 
            right--;
        else if(tolower(s[left])!=tolower(s[right])) 
            return false;
        else{
            left++; 
            right--;
        }
    }
    return true;
}
int main(){
    string str = "ABCDCBA";
    bool ans = isPalindrome(str);
    if(ans){
        cout << "string is palindrome" << endl;
    }
    else{
        cout << "string is not palindrome" << endl;
    }
    return 0;
}