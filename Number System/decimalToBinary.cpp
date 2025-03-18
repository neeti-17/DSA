#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 18;
    // int binary[32] = {0}; //O(logn)
    // int pow = 1;
    // int i =0;
    // while(n){
    //     binary[i] = n % 2;
	// 	i++;
	// 	n /= 2;
    // }
    // for (int ind = i - 1; ind >= 0; ind--) { //because it gets stored in reverse order
	// 	cout << binary[ind];
	// }

    int flag = 0;
    for(int i=32; i>=0;i--){ //O(32)
        if((n >> i) & 1){
            flag = 1;
            cout << 1 ;
        }
        else{
            if(flag == 1){
              cout << 0 ;
            }
        }
    }
    return 0;
}

//flag is used to not print any leading zeroes
//it indicates the point to start printing from 1 and then use all the other trailing zeroes after first 1