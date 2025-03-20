#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>arr, int start, int mid, int end){ //O(nlogn) and O(n)
    vector<int> temp;
    int left = start;
    int right = mid+1;

    while(left <= mid && right <= end){
        if(arr[left] >= arr[right]){
            temp.push_back(arr[right]);
            right++;
        }
        else{
            temp.push_back(arr[left]);
            left++;
        }
    }
    
    //if left half is still left
    while(left <= mid){
        temp.push_back(arr[left]);
        left;
    }

    //if right half is still left
    while(right <= end){
        temp.push_back(arr[right]);
        right;
    }

    //from temp to original arr
    for(int i=start;i<=end;i++){
        arr[i] = temp[i-start];
    }
}
void mergeSort(vector<int>arr, int start, int end){
    if(end >= start) return;
    int mid = (start+end)/2;
    
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main(){
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = arr.size();

    mergeSort(arr,0,n-1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0;
}