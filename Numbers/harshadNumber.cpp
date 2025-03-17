#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n  = 378;
//     int dup = n;
//     int sum =0;
//     while(n> 0){
//         int digit = n %10;
//         sum = sum + digit;
//         n = n /10;
//     }
//     if(dup%sum == 0){
//         cout << "it is harshad number" << endl;
//     }
//     else{
//         cout << "it is not a harshad number" << endl;
//     }
//     return 0;
// }

//abundant number
int main(){
    int n = 18;
    int sum =0;
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            sum += i;
        }
    }

    // or

    // for (int i = 1; i <= sqrt(n); i++) {
	// 	if (n % i == 0) {
	// 		if (n / i == i) {
	// 			sum += i;
	// 		}
	// 		else {
	// 			sum += i;
	// 			sum += n / i;
	// 		}
	// 	}
	// }

    if(sum > n){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}