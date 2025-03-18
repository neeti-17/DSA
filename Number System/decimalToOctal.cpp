#include<bits/stdc++.h>
using namespace std;


int main(){
    int n = 17;
    int octal = 0;
    int i = 0;
    while(n){ //O(logn)
        int rem = n % 8; 
        octal += rem * pow(10, i); //because we need to keep up with ones,tens and hundreds place and so on and rem needs to be added to last
        i++;
        n  = n/8;
    }
    cout << octal << endl;
    return 0;
}

//log8(n) but to convert base 8 to base 2 , we do => log2(n) / log2(8) => log2(n)/3 and 3 is constant so ignored