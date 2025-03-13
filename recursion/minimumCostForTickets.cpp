#include <bits/stdc++.h>
using namespace std;

//leetcode -> 983
//TC => O(3^N) and SC => O(N)

int minCostHelper(vector<int>&days, vector<int> &costs, int i){
    //base case
    if( i >= days.size()){
        return 0;
    }

    //1 day pass
    int cost1 = costs[0] + minCostHelper(days,costs,i+1);

    //7 days pass
    int passEndDay = days[i] + 7 - 1; //-1 because days[i] is included ,gives the next day after 7 days
    int j = i;
    while(j < days.size() && days[j] <= passEndDay){
        j++; //moves the next day after 7 days in array and skip the days in between as they are already covered in 7 days pass
    }
    int cost7 = costs[1] + minCostHelper(days,costs,j);

    //30 days pass
    passEndDay = days[i] + 30 - 1;
    j = i;
    while(j < days.size() && days[j] <= passEndDay){
        j++;
    }
    int cost30 = costs[2] + minCostHelper(days,costs,j);

    return min(cost1,min(cost7,cost30));
}
int main(){
    vector<int> days = {1,4,6,7,8,20};
    vector<int> costs = {2,7,15};
    int i=0;
    int ans = minCostHelper(days,costs,i);
    cout << ans << endl;
    return 0;
}