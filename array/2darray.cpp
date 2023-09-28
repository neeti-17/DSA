#include <iostream>
using namespace std;
// printing array column wise
int main(){
    int arr[3][3]={{10,20,30},{80,70,60},{40,50,60}};
    int col=3;
    int row =3;
    for (int i =0; i<col ;i++){
        for(int j =0; j<row ; j++){
            cout<< arr[i][j]<< " ";
        }

    }
}
//  tranpose of a matrix 
// tranpose(int arr[]int n){
//     for (int i=0; i<row ; i++){
//         for (int j=i;j<matrix[i].size(); j++){
//             swap(matrix[i][j], matrix [j][i]);
//         }
//     }

// }



// matrix[i].size() gives the column number for that particular row (i).


// triplet : for that we will just add third loop k from zero to n and then
// print arr[i] , arr[j], arr[k]