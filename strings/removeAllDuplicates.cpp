#include<bits/stdc++.h>
using namespace std;

string removeDuplicateLetters(string str){ //O(n)
    string ans = "";
    vector<bool> arr(26,false);
    for(int i=0;i<str.size();i++){
        if(arr[str[i] - 'a'] == false){ //when char repeat its bool value would be true and it will not be added
            ans+= str[i];
            arr[str[i] - 'a'] = true;
        }
    }
    return ans;
}
int main(){
    // string s = "bcabc";
    // string ans = "";
    // for (int i = 0; i < s.length(); i++) { //O(n^2)
    //     int j = 0;
    //     for (j = 0; j < i; j++) {
    //         if (s[i] == s[j]) //same character found
    //         {
    //             break;
    //         }
    //     }
    //     if (i == j) {
    //         ans += s[i];
    //     }
    // }
    // cout << "after removal" << ans << endl;
    // return 0;


    string str = "cbacdcbc";
    cout << "Original String: "<<str<<endl<<"After removing duplicates: "
    <<removeDuplicateLetters(str) << endl;
    return 0;
}