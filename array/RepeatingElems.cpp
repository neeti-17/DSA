#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,1,2,3,4,4,5,2};
    int n = arr.size();

    unordered_map<int,int>mp; //TC ->O(1) for search, delete and access but here TC -> O(N) as entire array is traversed and SC -> O(N) for map
    // for(int i=0;i<n;i++){
    //     mp[arr[i]]++;
    // }
    for(auto i : arr){
        mp[i]++;
    }
    for(auto x : mp){
        if(x.second >= 2){
           cout << x.first << endl;
        }
    }
    return 0;
}