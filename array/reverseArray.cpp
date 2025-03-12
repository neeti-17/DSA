#include <bits/stdc++.h>
using namespace std;

//simple recursion
// void reverseArray(vector<int>& arr, int start, int end){
//     if(start >= end) return;
//     swap(arr[start],arr[end]);

//     reverseArray(arr,start+1,end-1);

// }

//Function to reverse array using an auxiliary array
// void reverseArray(int arr[], int n) {
//     int ans[n];
//     for (int i = n - 1; i >= 0; i--) {
//        ans[n - i - 1] = arr[i];
//     }
//     printArray(ans, n);
//  }


int main(){
    vector<int> arr = {5,4,3,2,1};

    //we can use stl fucntion for this
    //reverse(arr,arr+n);

    //another approach is to take extra array -> SC -> O(N)

    //pointer approach 
    int p1=0;
    int p2= arr.size()-1;

    while(p1 < p2){
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }

    // //recursive approach
    // // reverseArray(arr,p1,p2);
    
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " " << endl;
    }

    return 0;
}