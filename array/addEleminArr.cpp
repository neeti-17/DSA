#include <bits/stdc++.h>
using namespace std;

void insertAtStart(vector<int>&arr, int n, int val){
    for(int i= n-1; i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = val;
}
void insertAtEnd(vector<int>&arr, int n, int value2){
    arr[n] = value2;
}
void insertAtPos(vector<int>&arr, int n, int value3, int pos){
    for(int i=n;i>=pos;i--){
       arr[i+1] = arr[i];
    }
    arr[pos-1] = value3;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int value = 6;
    int value2 = 7;
    int value3 = 8;
    int pos = 4;
    insertAtStart(arr,n,value);
    insertAtEnd(arr,n,value2);
    insertAtPos(arr,n,value3,pos);

    for(int i=0; i<=n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}