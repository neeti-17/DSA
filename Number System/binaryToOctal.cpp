#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "1100110";
    int base = 1;
    string ans = "";
    int n = s.length();
	if (n % 3 == 1) {
		s = "00" + s;
	}
    else if (n % 3 == 2) {
		s = "0" + s;
	}
    n = s.length();
    for(int i=0;i<n;i+=3){  //O(n)
        int temp = ((s[i] - '0') * 4) + ((s[i+1] - '0') * 2) + ((s[i+2] - '0') * 1); //-'0' to convert to integer
        ans += temp + '0'; //+'0' to convert to string
    }
    //for each 3 digit group we get one bit of our octal number
    cout << ans << endl;
    return 0;
}