#include<bits/stdc++.h>
using namespace std;

int main(){
    //brute force approach is to use 2 loops ->TC->O(N*N)
    int arr[] = {1,-2,-3,0,-4,-5};
    int n = 6;
    int result = arr[0];
    for(int i=0; i<n;i++){
        int p = arr[i];
        for(int j=i+1; j<n;j++){
            result = max(result,p);
            p *= arr[j];
        }
        result = max(result,p); //handles lasy (n-1)th elem
    }
    cout << result << endl;


    //better soluntion is KADANE'S ALGORITHM -> TC -> O(N) -> but we should do this 
    // int maxProductSubArray(vector<int>& nums) {
    //     int prod1 = nums[0],prod2 = nums[0],result = nums[0];
        
    //     for(int i=1;i<nums.size();i++) {
    //         int temp = max({nums[i],prod1*nums[i],prod2*nums[i]});
    //         prod2 = min({nums[i],prod1*nums[i],prod2*nums[i]});
    //         prod1 = temp;
            
    //         result = max(result,prod1);
    //     }
        
    //     return result;
    // }

    //another approach is obsevational -> TC -> O(N)
    //if all +ve elem = prod will be max when all elem are considered
    //if even -ve = still take all elem to get max prod
    //if odd -ve = remove any one of the -ve number and get prefix and suffix product
    //if zero = take rpefix and suffix of zeroes as seperate array and whenever prefix/suffix goes 0 make it 1 again
    int pre = 1;
    int suff = 1;
    int maxi = INT_MIN;
    for(int i=0 ;i<n;i++){
        if(pre == 0) pre = 1;
        if(suff == 0) suff = 1;
        pre *= arr[i];
        suff *= arr[n-i-1];
        maxi = max(maxi,max(pre,suff));
    }

    cout << maxi << endl;
    
    return 0;
}