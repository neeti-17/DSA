#include <bits/stdc++.h>
using namespace std;

void selectionSort(int array[],int n){ //o(N^2) and O(1)
    for(int i=0; i<n-1;i++){
       int mini = i;
       for(int j=i+1;j<n;j++){
        if(array[j] < array[mini]){
            mini = j;
        }
       }
       int temp = array[mini];
       array[mini] = array[i];
       array[i] = temp;
    }

    cout << "After selection sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}
int main(){
    int array[] = {13,46,24,52,20,9};
    int n = sizeof(array)/sizeof(array[0]);

    selectionSort(array,n);

    return 0;
}