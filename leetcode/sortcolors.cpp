#include<iostream>
#include<limits.h>
using namespace std;
void sortcolors(int arr[],int n){
    int left=0;
    int right= n-1;
    for(int index=0;index<=right ; index++){
        if(arr[index]==0){
            swap(arr[index],arr[left]);
            left++;
        }
        else if(arr[index]==2){
            swap(arr[index],arr[right]);
            right--;
        }
        else{
            index++;
        }

    }
}
int main(){
    int arr[]={2,0,2,1,1,0};
    int n = 6;
    sortcolors(arr,n);
    cout << "sorted array is:";
    for (int i=0 ; i<n ; i++){
        cout<< arr[i]<< endl;
    }
    return 0;
}