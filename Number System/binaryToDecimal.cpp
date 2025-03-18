#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "1011";
    int base = 1;
    int ans =0;
    for(int i=s.size()-1;i>=0;i--){ //O(n)
       if(s[i] == '1'){
        ans += base;
       }
       base = base * 2;
    }
    cout << ans ;
    
    //or 
    // cout << stoi(s, 0, 2); //stoi is string to integer -> stoi(string,position,base)
    return 0;
}