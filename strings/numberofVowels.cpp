#include<bits/stdc++.h>
using namespace std;

void solve(string &s, int n){ //O(n)
    int vowel =0;
    int consonants=0;
    int spaces =0;

    int i=0;
    while(i<n){
        char ch = tolower(s[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            vowel++;
        }
        else if(ch >= 'a' && ch <= 'z'){
            consonants++;
        }
        else if(ch == ' '){
            spaces++;
        }
        i++;
    }
    cout << "vowels :" << vowel << "\n";
    cout << "consonants :" << consonants << "\n";
    cout << "white spaces :" << spaces << "\n";
}
int main(){
    string str = "Take u forward is Awesome";
    int n = str.size();
    solve(str,n);
    return 0;
}