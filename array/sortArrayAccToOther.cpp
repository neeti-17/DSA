#include<bits/stdc++.h>
using namespace std;

vector<int> sortOther(vector<int>&arr1, int n , vector<int>&arr2, int m){
    map<int,int> mp;
    for (auto i : arr1) mp[i]++;

    vector<int> ans;
    for (auto e: arr2) {
        int freq = mp[e];
        while(freq){
            ans.push_back(e);
            freq--;
        }
        mp[e] = 0;
        //to kind to like erase it or done with this elem 
        //we can also use mp.erase(e);
    } 
    //to get remaining elems from map that are not in arr2
    for(auto i=mp.begin();i!=mp.end();i++){
        int val = i->first;
        int freq = i->second;
        while(freq){
            ans.push_back(val);
            freq--;
        }
        i->second =0;
    }
    return ans;
}
int main(){
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};

    int n = arr1.size();
    int m = arr2.size();
    vector<int> ans = sortOther(arr1,n,arr2,m);

    for(int i=0;i<n;i++){
        cout << ans[i] << endl;
    }
    return 0;
}