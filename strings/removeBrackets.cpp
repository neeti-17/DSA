#include <bits/stdc++.h>
using namespace std;

int main(){
    string expression = "a+((b-c)+d)" ;
    int i=0;
    string ans = "";
    while(i < expression.size()){ //O(n)
        if(expression[i] != '(' && expression[i] != ')'){
           ans.push_back(expression[i]);
        }
        i++;
    }
    cout << "string after removing the brackets is: " << ans << endl;
    return 0;
}