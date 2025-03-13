#include <bits/stdc++.h>
using namespace std;

//this is one approach using 2 loops
// bool isSubset(vector<int>&arr1, int n , vector<int>&arr2 , int m){ //TC -> O(N*M) and SC -> O(1)
//     //arr1 should be the subset of arr2 
//     if(n > m) return false;
//     for(int i=0;i<n;i++){
//         bool current = false;
//         for(int j=0;j<m;j++){
//             if(arr1[i] == arr2[j]){
//                 current = true;
//                 break;
//             }
//         }
//         if(current == false) return false;
//     }
//     return true;
// }

//another way is to use sorting and binary search 
//sort arr2 and then iterate over arr1 to find elem of arr1  in arr2 using binary search 
//TC -> O(NlogN + MlogN) and SC -> O(1)
// bool binarySearch(vector<int>&arr2, int k){
//     int start =0;
//     int end = arr2.size()-1;
//     while(start <= end){
//         int mid = (start+end)/2;
//         if(mid == k){
//             return true;
//         }
//         else if(mid > k){
//             end = mid-1;
//         }
//         else{
//             start = mid +1;
//         }
//     }
//     return false;
// }
// bool isSubset(vector<int>&arr1, int n, vector<int>&arr2, int m){
//     if(n > m) return false;

//     sort(arr2.begin(),arr2.end());

//     for(int i=0;i<n;i++){
//         int present = binarySearch(arr2,arr1[i]);
//         if(present == false) return false;
//     }
//     return true;
// }


//third approach is to use hashing 
bool isSubset(vector<int>&arr1, int n , vector<int>&arr2, int m){
    if(n > m) return false;
    unordered_map<int,bool> mp;
    for(auto i : arr2){
        mp[i] = true;
    }
    for(int i=0;i<n;i++){
        if(mp.count(arr1[i]) == 0){ //mp.count(key) calculate the occurence of the key , here == 0 means it doesn't exist
            return false;
            break;
        }
    }
    return true;
}
int main(){
    vector<int> arr1 = {1,3,4,5,2};
    vector<int> arr2 = {2,4,3,1,7,5,15};
    int n = arr1.size();
    int m = arr2.size();

    bool ans = isSubset(arr1,n,arr2,m);
    if(ans){
        cout << "arr1 is subset of arr2" << endl;
    }
    else{
        cout << "arr1 is not subset of arr2" << endl;
    }
    return 0;
}