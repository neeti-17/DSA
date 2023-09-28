#include<iostream>
#include<limits>
using namespace std;

// brute force approach -> then we will call this function in main funtion given in leetcode.
int bruteforce(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i <n; i++){
            int lsum=0;
            int rsum=0;
            for(int j=0; j<i; j++){
                lsum= lsum+ nums[j];
            }
            for(int j= i+1; j<n ; j++){
                rsum= rsum+ nums[j];
            }
            if (lsum==rsum){
                return i;
            }
        }
    }

//  prefixsum approach


    int prefixsum(vector<int>& nums){
        // twoo vectors for sum
        vector<int>lsum(nums.size(), 0);
        vector<int>rsum(nums.size(), 0);

        //  calculate rsum and lsum
        for(int i=0; i<nums.size(); i++){
            lsum[i]=lsum[i-1]+nums[i-1];
        }
        for(int i=nums.zise()-2; i>=0; i--){
            rsum[i]=rsum[i+1]+nums[i+1];
        }

        // check 
        for(int i=0 ; i<nums.size(); i++){
            if(lsum[i]==rsumm[i]){
                return i;
            }
        }
        return -1;


    }