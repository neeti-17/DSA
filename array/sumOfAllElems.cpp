#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2,5,1,7};
    int n = 6;
    double sum =0;
    for(int i=0;i<arr.size();i++){
        sum += arr[i];
    }
    double avg = sum/n;
    
    sort(arr.begin(),arr.end());
    double median =0;
    if(n%2 != 0){
        median = arr[(n/2)];
    }
    else{
        int ind2 = n/2;
        int ind1 = (n/2)-1;
        median = (arr[ind1] + arr[ind2])/2;
    }

    cout << median << endl;
    cout << sum << endl;
    cout << avg << endl;

    //another way is to use stl function accumulate(first,last,initial value) -> O(N)
    // cout << accumulate(arr,arr+n,sum) << endl;


    return 0;
}