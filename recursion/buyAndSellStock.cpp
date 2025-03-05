#include <bits/stdc++.h>
using namespace std;

//leetcode -> 121

// void buyAndSell(vector<int> &arr,int i, int j,int &ans){
//     //base case
//     if(j >= arr.size()){
//         i++;
//         j = i;
//     }

//     if(i >= arr.size() && j >= arr.size()){
//         return;
//     }

//     for(int k=i;k<=j;k++){
//         int profit = arr[j]-arr[i];
//         ans = max(ans,profit);
//     }

//     buyAndSell(arr,i,j+1,ans);
// }

// int main(){
//     vector<int> arr = {7,1,5,3,6,4};
//     int i=0;
//     int j =0;
//     int ans = INT_MIN;
//     buyAndSell(arr,i,j,ans);
//     cout << ans << endl;
//     return 0;
// }
void buyAndSell(vector<int>&price, int i, int &minprice, int &maxprofit){
    //base case
    if(i >= price.size()){
        return;
    }

    if(price[i] < minprice){
        minprice = price[i];
    }
    if(price[i] - minprice > maxprofit){
        maxprofit = price[i]-minprice;
    }

    buyAndSell(price,i+1,minprice,maxprofit);
}

int main(){
    vector<int> price = {7,1,5,3,6,4};
    int minprice = INT_MAX;
    int maxprofit = INT_MIN;

    buyAndSell(price,0, minprice, maxprofit);
    cout << maxprofit << endl;
    return 0;
}