#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){ //O(n^2) and O(1)
    for(int i=1;i<=n-1;i++){
        int temp = arr[i];
        int j = i-1;
        while(j >=0 && temp < arr[j]){
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j+1] = temp; //to also include the first iteration
    }

    cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main(){
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,n);
    return 0;
}