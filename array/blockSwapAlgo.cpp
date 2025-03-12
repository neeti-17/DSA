#include <bits/stdc++.h>
using namespace std;
void swap(int arr[],int a,int b, int k){
    for (int i = 0; i < k; i++)
    {
        int temp = arr[a + i];
        arr[a + i] = arr[b + i];
        arr[b + i] = temp;
    }
}
void blockSwap(int arr[], int n , int k){
    if(k==0 || k==n) return;

    if(k == n-k){
        swap(arr,0,n-k,k);
        return;
    }

    else if(k < n-k){
        swap(arr,0,n-k,k);
        blockSwap(arr,k,n-k);
    }

    else{
        swap(arr,0,k,n-k);
        blockSwap(arr + n - k, 2 * k - n, k);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 2;

    blockSwap(arr,n,k);
    cout << "Rotated array is : " << endl;

    for(int i=0; i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}


// int n = nums.size();
//         vector<int> ans(n);
        
//         for(int index=0; index<n; index++){
//             int newindex = (index + k)% n ;
//             ans[newindex] = nums[index];

//         }
//         nums = ans;
//     }
// }

// another way is to get the new index by (i+k)%n but it takes extra space


//and another is to reverse 
// k = k % n
//reverse(arr.begin(),arr.begin()+n-k);
//reverse(arr.begin()+n-k),arr.end());
//reverse(arr.begin(),arr.end());