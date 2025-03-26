#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "abcdef";
    string str2 = "cefz";

    string ans = ""; 
    //O(n*m) and O(n)
    // for(int i=0; i<str1.size();i++){ //for 1st string
    //     int flag =0;
    //     for(int j=0;j<str2.size();j++){ //for second string
    //         if(str1[i] == str2[j]){
    //             flag = 1;
    //         }
    //     }
    //     if(flag == 0){
    //         ans += str1[i];
    //     }
    // }

    unordered_map<char,int> mp; // O(n) and O(n)
    for(auto i : str2){
        mp[i]++;
    }
    for(auto j : str1){
        if(!mp[j]){ //or mp.find(j) == mp.end()
            ans+= j;
        }
    }

    cout << ans << endl;
    return 0;
}