#include <bits/stdc++.h>
using namespace std;

int main(){
    // int arr[]={1,2,4,6,7,5};
    // int n=sizeof(arr)/sizeof(arr[0]);

    // if(n==0 || n==1){
    //     return -1; //this is an edge case for smallest and largest
    // }

    //if(n < 2) return -1; edge case for second smallest and second largest

    vector<int>arr = {2,5,3,1,0};
    
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int second_mini = INT_MAX;
    int second_maxi = INT_MIN;

    // for(int i=0; i< arr.size();i++){
    //     mini = min(mini,arr[i]);
    //     maxi = max(maxi,arr[i]);
    // }
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i] < second_mini && arr[i] != mini){
    //         second_mini = arr[i];
    //     }
    //     if(arr[i] > second_maxi && arr[i] != maxi){
    //         second_maxi = arr[i];
    //     }
    // }

    for(int i=0; i<arr.size();i++){
        if(arr[i] < mini){
            second_mini = mini;
            mini = arr[i];
        }
        else if(arr[i] < second_mini && arr[i] != mini){
            second_mini = arr[i];
        }
    }

    for(int i=0; i<arr.size();i++){
        if(arr[i] > maxi){
            second_maxi = maxi;
            maxi = arr[i];
        }
        else if(arr[i] > second_maxi && arr[i] != maxi){
            second_maxi = arr[i];
        }
    }

    // cout << mini << endl;
    // cout << maxi << endl;
    cout << second_mini << endl;
    cout << second_maxi << endl;

    return 0;
}