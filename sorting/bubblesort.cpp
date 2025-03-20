#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n){ //O(n^2) and O(1)
    for(int i=0; i<n-1;i++){
        for(int j=0; i<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                // swapping elements if elements
                // are not in the intended order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void bubble_sort(int arr[], int n) { //O(N) for best case
    // bubble sort
    for (int i = n - 1; i >= 0; i--) {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0) {
            break;
        }
    }
}


int main(){
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}