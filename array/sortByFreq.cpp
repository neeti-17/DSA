#include <bits/stdc++.h>
using namespace std;

bool sorted(pair<int,int> a,pair<int,int> b){ //O(N)
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}
int main(){
    int arr[] = {1, 2, 3, 2, 4, 3, 1, 2};
    int n = 8;

    unordered_map<int,int> mp;
    for(auto i : arr){
        mp[i]++;
    }
    vector<pair<int,int>> ans;
    for(auto i=mp.begin();i != mp.end(); i++){
       ans.push_back({i->first,i->second});
    }
    sort(ans.begin(),ans.end(),sorted);

    for(int i=0; i<ans.size();i++){
        while(ans[i].second > 0){
            cout << ans[i].first << endl;
            ans[i].second--;
        }
    }

    return 0;
}