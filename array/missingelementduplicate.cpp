#include<iostream>
using namespace std;

// method 2 sorting and swapping.
 void findmissing(int arr[], int n){
    for (int i=0; i<n ; i++){
        int index = arr[i]-1;
        if(arr[index]!=arr[i]){
            swap(arr[index],arr[i]);

        }
    }
    for(int i =0 ; i<n ; i++){
        if(arr[i]!= i+1){
            return i+1;
        }
        }
}
int main(){
    int arr[]= {1,3,5,3,4};
    int n = sizeof(arr)/sizeof(int);
    //  we will use index -1 to match the array indeximg starting from zero 
    // as we used arr indexing from 1.
    for(int i=0; i<n; i++){
        int index = abs(arr[i]);   
        if(arr[index-1]> 0){
            arr[index-1]*= -1;
        }
    }
    //  all positive are missing
    for (int i=0 ; i<n ; i++){
        if(arr[i]>0){
            cout << i+1 << endl;
        }
    }
    return 0;
}





