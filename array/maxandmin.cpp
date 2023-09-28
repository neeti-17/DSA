#include <iostream>
#include <limits.h>
using namespace std;
int main (){
    int arr[]={10,8,32,3,2,45,67,51};
    int n =8;
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        else if(arr[i]>max){
            max = arr[i];
        }
    }
    cout << "min is: "<< min << endl;
    cout << "max is: "<< max << endl;


    return 0;
}

//  reverse an array

void reverseArray(int arr[], int n){
    int left =0;
    int right = n-1;
    while(left<=right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for (int i=0; i<n; i++){
        cout<< arr[i]<< endl;
    }

}