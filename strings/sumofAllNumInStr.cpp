#include<bits/stdc++.h>
using namespace std;

// (multiple consecutive digits are considered one number)
//O(n) and O(n)

int main(){
    string s = "123xyz";
    string tempStr = "";
    int sum = 0;

    for(int i=0;i<s.size();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            tempStr += s[i]; //to get consecutive numbers
        }
        else{ //if it doesnt get a number , it takes till now numbers and add them to sum as till the number is treated as one number
            sum += stoi(tempStr);
            tempStr = ""; //again e,pty the string and start with next char
        }
        cout << sum + stoi(tempStr) << endl ;
    }
    return 0;
}

//we can also use atoi()
// atoi() is a legacy C function that converts a C-string (const char*) to an integer.
// tempSum.c_str() provides the required format for atoi().

// c_str() is a C++ function that returns a pointer to a null-terminated character array (C-style string) from a std::string.
// It is commonly used for interoperability with functions like atoi() which expect a const char* input.

//atoi() and stoi() are almost similar to each except one difference
//atoi() returns 0 if string is not convertible
//while stoi() simply throws an exception