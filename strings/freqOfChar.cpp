#include <bits/stdc++.h>
using namespace std;

int main(){
    //one way is too sort the string and count the freq ->O(nlogn) and O(1)
    string s = "takeuforward";
    sort(s.begin(),s.end());
    char ch = s[0];
    int count =1;
    for(int i=1;i<s.size();i++){
        if(s[i] == ch){
           count++;
        }
        else{
            cout << ch << count << " ";
            count = 1;
            ch = s[i];
        }
    }
    cout << ch << count << " ";

    //another way is to create a hashmap -> O(n) -> r2 d1 o1 f1 u1 t1 e1 w1 a2 k1 
    unordered_map<char,int> mp;
    for(auto ch : s){
        mp[ch]++;
    }
    for(auto i : mp){
        // cout << i.first << i.second << " "; //gfor freq count
        if(i.second == 1){ //for non repeating char
            cout << i.first << " ";
        }
    }

    // int i, j; //another approach to get freq -> O(n) and O(n)
    // int l = st.length();

    // for (int i = 0; i < l; i++) {
    //     if (st[i] == ' ') // ignoring the space in the string
    //       continue;
    //     else
    //       freq[st[i] - 'a']++; // incrementing each character's frequency
    //     }

    // Printing non-repeating characters of the string
    // for (int i = 0; i < l; i++) {
    //      if (freq[st[i] - 'a'] == 1 && st[i] != ' ') {
    //         cout << st[i] << " ";
    //      }
    // }
    

    //another method is to use a freq array to store freq
    int freq[26] = {0}; //O(n) and space is O(26) which is constant
    for(int i=0;i<s.size();i++){
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
        cout << (char)(i + 'a') << freq[i] << " ";
        }
    }
    return 0;
}