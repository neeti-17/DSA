#include <iostream>
using namespace std;
//  right shift
void shiftelements(int arr[], int n){
    // step 1
    int temp= arr[n-1];

    // step 2
    for(int i=n-1; i>=1 ; i--){
        arr[i]= arr[i-1];
    }
    //  step 3
    arr[0]= temp;

}

//  kth times shift
void shiftelements(int arr[], int n,int k){
    //  step 1
    int temp[k];
    int d=0;
    
    for(int i=n-k; i<n ;i++){
       temp[d]=arr[i];
       d++;
    }
    // step 2
    for(int i=n-1; i>=k ; i--){
        arr[i]= arr[i-k];
    }
    // step 3
    for(int i=0 ; i<k ;i++){
        arr[i]=temp[i];
    }

}

int main(){
    int arr[]={ 10,20,30,40,50,60};
    int n =6;
    int k=2;
    shiftelements( arr, n,k);
    for (int i=0; i<n ; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}

//  for left shift we have arr[i]= arr[i+1]
//  we using arr[i]=arr[i-1] and not arr[i+1]= arr[i] in right shift as it will copy the same value.



