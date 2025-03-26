#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "sinstriiintng";

    // unordered_map<char,int>mp; //O(n logn) as hashmap access time is logn and we are checking eevery pair
    // for(auto i : s){
    //     mp[i]++;
    // }
    // for(auto ch : mp){
    //     if(ch.second>1){
    //         cout << ch.first << ":" << ch.second << endl;
    //     }
    // }

    vector<int> count(26,0); //O(n)
    for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;
    }

    for (int i = 0; i < 26; i++){
        if (count[i] > 1)
        cout << (char)(i + 'a') << " - " << count[i] << "\n";
    }
    return 0;
}