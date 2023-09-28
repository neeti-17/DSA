#include<iostream>
using namespace std;
int main(){
    int arr[]={3,0,1};
    int n =3;
    int x1=0;
    int x2=0;
    for(int i=0; i<n ; i++){
        x1= x1^arr[i];
    }
    for(int j=0 ;j<=n;j++){
        x2= x2^j;
    }
    int x3= x1^x2;
    cout << x3 << endl;
    return 0;
}

// sum approach
// int sum=0;
// int sum2=0;
// for(int i=0; i<=n; i++){
//     sum = sum+i;

// }
// for(int index=0; index<n ; index ++){
//     sum2= sum2 + arr[index];
// }
// int num = sum - sum2;
// return num;