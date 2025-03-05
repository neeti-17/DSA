#include <bits/stdc++.h>
using namespace std;

void allSubarray_util(vector<int> &array,int i, int j){ //TC =>O(N^2) and SC => O(N)
    //base case
    if(j == array.size()){
        return;
    }

    for(int k=i; k<=j; k++){
        cout << array[k] << "";
    }
    cout << endl;

    allSubarray_util(array,i,j+1);
    return; 

}
void allSubarray(vector<int> &nums){
    for(int start =0; start <nums.size(); start++){
        int end = 0;
        allSubarray_util(nums,start,end);
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    allSubarray(nums);

    return 0;
}