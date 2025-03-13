#include <bits/stdc++.h>
using namespace std;

// leetcode -> 44
//TC => O(2^N) and SC => O(N)

bool wildCardMatch(string s, int si, string p, int pi){
    //base case
    if(si==s.size() && pi==p.size()){
        return true;
    }

    if(si == s.size() && pi < p.size()){
        //this will return true when there is no char after '*' or "****" something like this
        while(pi < p.size()){
            if(p[pi] != '*'){
                return false;
            }
            pi++;
        }
        return true;
    }

    if(s[si] == p[pi] || p[pi] == '?'){
        return wildCardMatch(s, si+1, p , pi+1);
    }

    if(p[pi] == '*'){
        //case 1 -> take '*' as empty or null
        bool caseA = wildCardMatch(s,si,p,pi+1);

        //case 2 -> '*' will consume a char of s
        bool caseB = wildCardMatch(s,si+1,p,pi);
        return caseA || caseB;
    }

    return false; // char doesnt match
}

int main(){
    string s = "abcdefg";
    string p = "ab*fg";
    int si = 0;
    int  pi =0;
    bool ans = wildCardMatch(s,si,p,pi);
    cout << ans << endl;

    return 0;
}