#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4, 3, 9, 2, 4, 1, 10, 89, 34};
    int n = arr.size();

    //another approach is 2 loops -> TC ->  O(n*n) for updating boolean array and O(n) for the printing of non-duplicates and SC -> O(N)+O(N) for ans and mark
    // vector<int> mark(n,1);
    // for(int i=0; i<n;i++){
    //     if(mark[i] == 1){
    //         for(int j= i+1; j<n ;j++){
    //            if(arr[i] == arr[j]){
    //             mark[j] = 0;
    //            }
    //         }
    //     }
    // }
    // for(int i=0; i<n;i++){
    //     if(mark[i] == 0){
    //         cout << arr[i] << ",";
    //     }
    // }

    //using hashmap -> TC -> O(N)+O(N) = O(N) Iteration in array , searching hash table  and SC -> O(N)  Using hashtable
    map<int,int> mp;
    for(int i=0; i<n;i++){
        if(mp.find(arr[i]) == mp.end()){ //map mai already nahi h mtlb duplicate nahi original number h 
            cout << arr[i] << endl;
            mp[arr[i]]++;
        }
    }
    return 0;
}