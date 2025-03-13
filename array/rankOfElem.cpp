#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {20,15,26,2,98,6};
    int n = 6;

    //first approch is to use 2 loops and get the rank by calculating how many numbers are less than the given number
    //rank would be num of elem less + 1 -> TC -> O(N*N) and SC -> O(N)
    //we have used set here that will store elem which are less than the current elem and then we will return size of set + 1 ...
    // int rank =0;
    // for(int i=0; i<n;i++){
    //     set<int> st;
    //     for(int j=0;j<n;j++){
    //         if(arr[j] < arr[i]){
    //             st.insert(arr[j]);
    //         }
    //     }
    //     cout << st.size()+1 << endl;
    // }


    //another approach
    //sort the array and store each rank in map
    //TC -> O(n)+O(nlogn)+O(n). O(n) for copying the elements from the original to the dummy array, O(nlogn) for sorting the dummy array, and O(n) for printing the ranks.
    //SC -> O(N+N), for using dummy array and hashmap.

    map<int, int>mp;
	int temp = 1;
	int brr[n];
	for (int i = 0; i < n; i++) { //because we can not for this question sort the original array
		brr[i] = arr[i];
	}
	sort(brr, brr + n);
	for (int i = 0; i < n; i++) {
		//if element is previously not store in the map
		if (mp[brr[i]] == 0) { //every elem will get stored once and and if duplicate same rank will get stored
			mp[brr[i]] = temp;
			temp++; //rank keeps getting updated
		}
	}
	for (int i = 0; i < n; i++) {
		cout << mp[arr[i]] << " ";
	}


    return 0;
}