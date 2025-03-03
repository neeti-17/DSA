#include <iostream>
using namespace std;

void checkSubsequence(string s, string ans, int index){
    //base case
    if(index >= s.length()){
        //ans is build
        cout << ans << endl;
        return;
    }

    char ch = s[index];


    // //exclude 
    // checkSubsequence(s,ans,index+1);

    // //include 
    // //phle ek bar ans mai ch ko ass kr do 
    // ans.push_back(ch);
    // checkSubsequence(s,ans,index+1);


    //include 
    ans.push_back(ch);
    checkSubsequence(s,ans,index+1);

    //exclude
    ans.pop_back();
    checkSubsequence(s,ans,index+1);

}

int main(){
    string s = "abc";
    string ans = "";

    int index =0;

    checkSubsequence(s,ans,index);
}