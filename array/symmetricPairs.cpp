#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[][2] = {{1,2},{2,1},{3,4},{4,5},{5,4}};
    int n = 5;

    //using for loop -> TC -> O(N*N)
    for(int i=0; i<n;i++){
        int first = arr[i][0];
        int second = arr[i][1];
        for(int j=i+1;j<n;j++){
            if(arr[j][0] == second && arr[j][1] == first){
                cout << "(" << arr[i][1] << " " << arr[i][0] << ")" << endl;
            }
        }
    }

    //another approach using hashmap -> TC -> O(N)
    unordered_map<int,int> mp;
    for(int i=0; i<n;i++){
        int first = arr[i][0];
        int second = arr[i][1];
       if(mp.find(second) != mp.end() && mp[second] == first){
         cout << "(" << first << " " << second << ")" << endl;
       }
       else{
        mp[first] = second;
       }
    }
    return 0;
}