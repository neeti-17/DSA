#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "take u forward IS Awesome";

    // for(int i=0;i<s.size();i++){ //O(n)
    //     int ascii = int(s[i]);
    //     if(ascii >= 65 && ascii <=90){ //uppercase found
    //         s[i] = char(ascii+32);
    //     }
    //     else if(ascii >=97 && ascii <= 122){
    //         s[i] = char(ascii-32);
    //     }
    // }

    //or 
    for(int i=0;i<s.size();i++){ //O(n)
        int ascii = int(s[i]);
        if(ascii >= 65 && ascii <= 90){
            s[i] = tolower(s[i]);
        }
        else if(ascii >= 97 && ascii <= 122){
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}