#include<iostream>
using namespace std;
int uniqueelement(int arr[], int n){
    int ans =0;
    for(int i=0; i<n ;i++){
        ans= ans^arr[i];

    }
    return ans;
        
    

}
int main(){
    int arr[]={2,10,11,10,2,13,15,15,13};
    int n=9;
    int ans2= uniqueelement( arr, n);
    cout << "element is : "<< ans2<< endl;

}


// print all pairs from array

// for (int i=0; i<n; i++){
//     for (int j=0; j<n ;j++){
//         cout << arr[i] << " "<< arr[j]<< endl;
//     }
// }

// we use second loop with j=i; j<n ;j++
// we will get {(10,10),(10,20),(10,30),(20,20),(20,30),(30,30)} for arr={10,20,30}