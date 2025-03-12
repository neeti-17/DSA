#include <bits/stdc++.h>
using namespace std;


int removeDuplicates(int arr[], int n){ //TC -> O(n*log(n))+O(n) and SC -> O(n)
    //as time complexity to insert elem in set is O(logn) and we are iterating the whole array so O(n*log(n)) 
    //and + O(n) at end to make the new array after removing duplicates
    set<int>s;

    for(int i=0; i<n;i++){
        s.insert(arr[i]);
    }
    int k = s.size();
    int j=0;
    for(auto x : s){
        arr[j] = x; //adding only single elements without duplicates 
        j++;
    }
    return k;
}
int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int k = removeDuplicates(arr,n); //using hashSet 

    // cout << "array after duplicates is :" << endl;
    // for(int i=0; i<k;i++){
    //     cout << arr[i] << endl;
    // }

    //second approach using 2 pointers -> O(n)
    int i =1, j=0;
    while( i< n){
        if(arr[i]==arr[j]){
            i++;
        }
        else{
            arr[++j]=arr[i];
        }
    }
    cout <<  j+1 << endl; //j+1 because j is index and indexing in array is zero based to we have to add 1 to get the 1 based indexing

    return 0;
}