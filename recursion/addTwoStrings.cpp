#include <bits/stdc++.h>
using namespace std;

// leetcode -> 415

void recursion(string &num1,string &num2,int i, int j ,int carry, string &ans){ //TC => O(N) and SC => O(N)
    //base case
    if( i<0 && j < 0){
        if(carry != 0){
            // return string(1,carry+'0'); //1 -> length of string 
            ans.push_back(carry + '0');
        }
        return;
    }

    int n1 = (i >= 0 ? num1[i] : '0') - '0'; //string to integer => subtract '0'
    int n2 = (j >= 0 ? num2[j] : '0') - '0';
    int csum = n1 + n2 + carry;
    int digit = csum % 10;
    carry = csum /10;

    ans.push_back(digit+'0'); //int to string => addition '0'
    recursion(num1,num2,i-1,j-1,carry,ans);

}
int main(){
    string num1 = "11";
    string num2 = "123";

    int i = num1.size()-1;
    int j = num2.size()-1;

    int carry = 0;
    string ans = "";
    recursion(num1,num2,i,j,carry,ans);
    reverse(ans.begin(),ans.end());
    cout << ans << endl;

    return 0;
}