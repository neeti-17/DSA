#include<bits/stdc++.h>
using namespace std;

string removeVowels(string &s){ //O(n)
    for(int i=0;i<s.size();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            s = s.substr(0,i) + s.substr(i+1);
            // i--;
        }
    }
    return s;
}
string removeSpace(string &s){ //O(n)
    for(int i=0;i<s.size();i++){
        if(s[i] == ' '){
            s = s.substr(0,i) + s.substr(i+1);
        }
    }
    return s;
}
string removeChar(string &str){ //O(n)
    string ans;
    for (int i = 0; i < str.size(); i++) {
      int ascii = (int) str[i]; // ascii value
  
      if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)) // if alphabets
        ans.push_back(str[i]);
    }
    return ans;
}
int main(){
    // string str = "take u forward";
    // // string ans = removeVowels(str);
    // string ans2 = removeSpace(str);
    // // cout << "after removal of vowels the str is: " << ans << endl;
    // cout << "after removal of space the str is: " << ans2 << endl;

    string s = "take12% *&u ^$#forward";
    cout << "after removing the chars and nummbers: " << removeChar(s) << endl;
    return 0;
}