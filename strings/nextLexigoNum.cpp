#include<bits/stdc++.h>
using namespace std;

// string solve(string &str, int n){ //O(n)
//     for(int i=0;i<n;i++){
//         int ascii = int(str[i]);
//         //edge case one -> if char is 'Z'
//         if(ascii == 90){ //Z
//             str[i] = char(65);
//         }
//         //edge case 2 -> when char is 'z'
//         if(ascii == 122){ //z
//             str[i] = char(97);
//         }
//         else if ((ascii >= 65 && ascii < 90) || (ascii >= 97 && ascii < 122))
//             str[i] = char(ascii + 1);
//     }
//     return str;
// }

string solve(string &str, int n){ //O(n)
    for(int i=0;i<n;i++){
        // int ascii = int(str[i]);
        if(str[i] == 'Z'){ //Z
            str[i] = 'A';
        }
        if(str[i] == 'z'){ //z
            str[i] = 'a';
        }
        else if ((str[i] >= 'A' && str[i] < 'Z') || (str[i] >= 'a' && str[i] < 'z'))
            str[i] = char(str[i] + 1);
    }
    return str;
}

int main(){
    string str = "abcdxyz";
    int length = str.length();
    cout<<"Original String: "<<"\n";
    cout<<str<<endl;
    cout << "New string: " << "\n";
    cout << solve(str, length) << "\n";
    return 0;
}