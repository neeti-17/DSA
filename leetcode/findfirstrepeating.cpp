#include<iostream>
#include<limits.h>
using namespace std;
// wel will use hashing for this and we have stl for that.
// unordered_map 
// syntax :  unordered_map<int , int> hash;
// unordered is stl , argumaents are given in key value pair (int,int), and hash is name.
// we can also make our owm hash.

void findmissing(int arr[], int n){
    unorder_map<int, int> hash;
    for(int i=0; i<n ; i++){
        hash[arr[i]]++;
    }
    for(int i=0; i<n; i++){
        if(hash[arr[i]]>1){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int arr[]= {1,3,5,3,4,6};
    int n = 6;
    findmissing(arr,n);
}