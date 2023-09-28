#include <iostream>
using namespace std;
// counting approach
void setzeroone(int arr[],int n){
    int countone=0;
    int countzero=0;
    for(int i=0 ; i<n; i++){
        if (arr[i]==0){
            countzero++;
        }
        else{
            countone++;
        }
        
    }
    // place zero and one in the array as per the counted value
    for (int i=0; i<countzero ; i++){
        arr[i]=0;

    }
    for(int j=0; j<countone; j++){
        arr[j]=1;
    }
}

// 2 pointer approach
void sortzeroandone( int arr[],int n){
    // int n= sizeof(arr);
    int j=0;
    for(int index=0;index<n ; index++){
        if(arr[index]==0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
    for(int i=0 ; i<n ;i++){
        cout << arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,0,0,1,0,1,1};
    int n=7;
    sortzeroandone(arr,n);

    return 0;    
}
