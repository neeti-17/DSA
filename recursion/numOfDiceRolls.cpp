#include <bits/stdc++.h>
using namespace std;

//leetcode 1155
//TC -> O(K^N) and SC ->O(N)

int recursionRolls(int n, int k, int target){
    //base cases
    if(target < 0) return 0;
    if(n==0 && target == 0) return 1;
    if(n!= 0 && target == 0) return 0;
    if(n ==0 && target!=0) return 0;

    int res = 0;
    for(int i=1; i<=k;i++){
        res += recursionRolls(n-1,k,target-i);
    }

    return res;
}
int main(){
    int n = 3;
    int k =2;
    int target = 6;
    int ans = recursionRolls(n,k,target);
    cout << ans << endl;

    return 0;
}