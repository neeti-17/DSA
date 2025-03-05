#include<bits/stdc++.h>
using namespace std;

//leetcode -> 279

int numOfSquares(int n){ //TC => O(sqrt(n)^n) ~= O(N^N) and SC => O(N)
    int ans = INT_MAX;
    //base case
    if(n == 0){
        return 1;
    }

    int i=1;
    while(i <= sqrt(n)){
        int perfectSquare  = i * i ;
        int numOfPrefectSqaures = 1 + numOfSquares(n - perfectSquare);
        ans = min(ans,numOfPrefectSqaures);
        i++;
    }
    return ans;
}
int main(){
    int n = 12;
    int ans = numOfSquares(n) -1;
    cout << ans << endl;
    return 0;
}