#include <iostream>
using namespace std;
void extremeprint(int arr[], int n){
    int left=0;
    int right= n-1;
    while(left<=right){
        if(left==right){
            cout<< arr[left]<< endl;
        }
        else{
            cout << arr[left]<<endl;
            cout << arr[right]<< endl;
        }
        left++;
        right--;
    }
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n =6;
    extremeprint(arr,n);
}