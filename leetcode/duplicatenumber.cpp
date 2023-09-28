#include<iostream>
using namespace std;




int findDuplicate(int nums[]){
        int ans=-1;
        int n = sizeof(nums);
        // int n = nums.size();
        for(int i =0; i<n ; i++){
            int index = abs(nums[i]);  
            // abs is for absolute value.
            // this is the index jis pr hum ja rhe h element se.
            if(nums[index]<0){
                return index;
            }
            else{
                // mark visited 
                // multiply by -1 to make it negative.
                nums[index] *= -1;   
            }
            
        }
        return ans;
}

// 3rd approach without modifying.

int findDuplicate(int nums[]){
while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];                
}

//  in this we are using the number present at the index zero as index 
//  and uske baad jo number zero index h pr h usko 
// aur uss number ko jo zero index wale element ko index ki trh use krke number mila usko swap krdo.