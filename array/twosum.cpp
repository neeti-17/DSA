#include<iostream>
using namespace std;

bool chkPair(int A[], int size, int x)
{
    for (int i = 0; i < (size - 1); i++) {
        for (int j = (i + 1); j < size; j++) {
            if (A[i] + A[j] == x) {
                return 1;
            }
        }
    }
 
    return 0;
}
int main(){
    int arr[] = { 0, -1, 2, -3, 1 };
    int x = -2;
    int size = sizeof(arr);  // sizeof(arr[0]);  add this if not working
 
    if (chkPair(arr, size, x)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << x << endl;
    }
 
    return 0;
   
    
}

// two pointer approach

// bool hasArrayTwoCandidates(int A[], int arr_size, int sum)
// {
//     int l, r;
//     sort(A, A + arr_size);  or sort (a.begin(), a.end());  for vetor array
//     r = arr_size - 1;
//     while (l < r) {
//         if (A[l] + A[r] == sum)
//             return 1;
//         else if (A[l] + A[r] < sum)
//             l++;
//         else // A[l] + A[r] > sum
//             r--;
//     }
//     return 0;
// }