#include<bits/stdc++.h>
using namespace std;
void reverseStringStack(string &str){ //O(n) and O(n)
    stack<char> st;
    for(auto i : str){
        st.push(i);
    }

    int j = 0;
    while (!st.empty()) {
       char elem = st.top();
       st.pop();
       str[j] = elem;
       j++;
    }
}
void reverseString(string &str){ //O(n) but the loop will move n/2
    int left=0;
    int right = str.size()-1;
    while(left < right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
}
int main(){
    string s = "hello";

    //one way is to use the built in function
    // reverse(s.begin(),s.end()); //O(n)


    // reverseString(s);
    // cout << "reversed string is: " << s << endl;

    reverseStringStack(s);
    cout << "reversed string is: " << s << endl;
    return 0;
}