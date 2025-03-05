#include<bits/stdc++.h>
using namespace std;

//leetcode -> 1910
void removeOccurence(string &s, string &part){ //TC => O(N^2) and SC => O(N/M)
    //find the index of part in s
    int found = s.find(part);
    if(found != string::npos){ //npos is returned when substr is not found -> if found != npos that means substring was found 
        //substring is found
        //we will remove it
        string left = s.substr(0,found);
        string right = s.substr(found + part.size(), s.size());
        s = left + right ;

        removeOccurence(s,part);
    }
    else{
        //base case 
        return;
    }

}
int main(){
    string s = "daabcbaabcbc";
    string part = "abc";

    removeOccurence(s,part);
    cout << s << endl;
    return 0;
}