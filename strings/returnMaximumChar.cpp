#include<bits/stdc++.h>
using namespace std;


char maxOccurringChar(string str) { //using freq array -> O(n) and O(1)
    char ans;
    int maxfreq = 0, n = str.length();
    int count[256] = {0};
    for (int i = 0; i < n; i++) {
       count[str[i]]++;
       if (count[str[i]] > maxfreq) {
          maxfreq = count[str[i]];
          ans = str[i];
       }
    }
    return ans;
}
int main() {
    string str = "takeuforward";
    cout << "Maximum occurring character is " << maxOccurringChar(str) << endl;
}


char maxOccurringChar(string str) { //O(nlogn)
    char ans = str[0];
    int i, curr_freq = 0, max_freq = 0, n = str.length();
    for (i = 0; i < n; i++) {
       if (str[i] == str[i - 1]) {
          curr_freq++;
       } 
       else {
          if (max_freq < curr_freq) {
             max_freq = curr_freq;
             ans = str[i - 1];
          }
          curr_freq = 0;
       }
    }
    if (max_freq < curr_freq) {
       max_freq = curr_freq;
       ans = str[i - 1];
    }
    return ans;
 }
 int main() {
    string str = "takeuforward";
    //sort the string
    sort(str.begin(), str.end());
    cout <<  "Maximum Occurring Character is " << maxOccurringChar(str);
 }
