#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2,2,3,4,4,2};
    int n = arr.size();


    //using two loops -> TC -> O(N*N) and SC -> O(N)
    vector<bool>visited(n,false);

    for(int i=0;i<n;i++){
        if(visited[i] == true) continue;

        int cnt = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                cnt++;
            }
        }
        cout << arr[i] << ":" << cnt << endl;
    }


    // //using maps
    // unordered_map<int,int>mp; //TC -> O(N) and SC -> O(N)
    // for(int i=0; i<arr.size();i++){
    //     mp[arr[i]]++;
    // }

    // for(auto m : mp){
    //     cout << m.first << ":" << m.second << endl;
    // }
    return 0;
}