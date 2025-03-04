#include <bits/stdc++.h>
using namespace std;

void reverseString(string &st, int s, int e){ //TC => O(N) and SC => O(N) 
    if(s >= e) return;

    swap(st[s],st[e]);
    reverseString(st, s+1,e-1);

}
int main(){
    string s = "abcde";
    int start = 0;
    int end = s.size()-1;

    reverseString(s,start,end);
    cout << s << endl;
    return 0;
}