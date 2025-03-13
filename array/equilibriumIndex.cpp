#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2,3,-1,8,4};
    int n = arr.size();

    //first approach is to use 2 loops -> TC -> O(N*N)
    for(int i=0; i<n;i++){
        int leftsum = 0;
        for(int j = 0;j<i;j++){
            leftsum += arr[j];
        }
        int rightsum =0;
        for(int j = i+1; j <n;j++){
            rightsum += arr[j];
        }

        if(leftsum == rightsum){
            cout << i << endl;
        }
    }

    //another way is to use totalsum -> TC -> O(N)
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum += arr[i];
    }
    int leftsum =0;
    int rightsum = totalsum ;
    for(int i=0;i<n;i++){
        rightsum = rightsum - arr[i];
        if(rightsum == leftsum){
            cout << i << endl;
        }
        leftsum += arr[i];
    }
    return 0;
}