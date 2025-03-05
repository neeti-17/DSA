#include<iostream>
#include<vector>
using namespace std;

int removeduplicates(vector<int>&nums){
    int i=1, j=0;
    while(i<nums.size()){

        // check for the element
        if(nums[i]==nums[j]){
            i++;
        }
        else{
            nums[++j]=nums[i++];
        }
        // another way of writing the above else statement.
        // else{
        //     j++;
        //     nums[j]= nums[i];
        //     i++;
        // }
        
    }
    return j+1;
}