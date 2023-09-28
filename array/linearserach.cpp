#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,5,7,9,1};
    int n =5;
    int key;
    cout << "enter the key: "<< endl;
    cin>> key;
    bool flag =0 ;
    for (int i=0; i<n ; i++){
        if(arr[i]==key){
            flag =1;
            break;
        }
    }
    if (flag==1){
        cout << "element found"<<endl;
    }
    else{
        cout << "not found"<< endl;
    }

}