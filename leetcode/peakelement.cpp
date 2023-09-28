#include<iostream>
using namespace std;
int peakelement(int arr[],int n){
    //  in case of vector
    // int n = arr.size();
    int s=0;
    int e=n-1;
    int mid = s+((e-s)/2);
    // using s< e to prevent the infinte loop for e= mid
    while(s<e){  
        if (arr[mid]<arr[mid+1]){
            // we are in A
            // right jao
            s= mid+1;
        }
        else{
            // we are in B 
            // or we are at peak
            // solve the problem of goig to left as well as being at mid
            e=mid;
        }
        return s;
    }
}
int main(){
    int arr[]={0,2,1,0};
    int n=4;
    int ans= peakelement( arr, n);
    cout << ans << endl;
}

// ans yaha pr glt aa rha h maybe because we havent used the vector but the function is same.