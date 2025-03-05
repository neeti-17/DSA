#include <bits/stdc++.h>
using namespace std;
bool palindromeCheck(string &s, int i, int j){ //TC => O(N) and SC => O(N) 
    // base case
    if(i >= j){
       return true;
    }
    if(s[i] != s[j]){
        return false;
    }
    return palindromeCheck(s,i+1,j-1);

}
//1 -> true and 0 -> false
int main(){
    string s = "racecar";
    int i = 0;
    int j = s.size()-1;
    bool ans = palindromeCheck(s,i,j);
    cout << ans << endl;
    return 0;
}