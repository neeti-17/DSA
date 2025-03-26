#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "takeuforward";
    string str2 = "forward";

    for(int i=0;i<str1.size();i++){ //O(N^2)
        int temp = i;
        int j =0;
        for(j=0;j<str2.size();j++){
            if(str1[temp] != str2[j]){
                break;
            }
            temp++;
        }
        if(j == str2.size()){
            cout << i << endl;
        }
    }

    //or using inbuilt function

    cout << str1.find(str2) << endl; //O(n)
    return 0;
}