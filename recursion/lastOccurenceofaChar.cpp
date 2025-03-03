#include <bits/stdc++.h>
using namespace std;

void solve(string &s, char ch,int index,int &ans){ //tc = O(n+1) and sc = O(n+1) while we move from right to left as that is the worst case
    //base case
    if(index >= s.size()){
        return;
    }
    char c = s[index];
    if(c == ch){
        ans = index;
    }
    solve(s,ch,index+1,ans);
}
int main(){
    string s = "abcddedg";
    char ch = 'd';
    int index=0;
    int ans = 0;
    solve(s,ch,index,ans);
    cout << ans << endl;

}