#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>&nums, int target)
    {
        int l=0;
        int r=1;
        while(l<r){
            if(r==nums.size()){
                l++;
                r=l+1;
            }
            if(nums[l]+nums[r]==target){
                return {l,r};
                break;


            }
            else{
                r++;
            }
        }
        return {};
    }

