#include<iostream>
#include<vector>
using namespace std;

void wavematrix(vector<vector<int>> v){
    int m= v.size();
    int n = v[0].size();
    for(int j=0; j<n; j++){

        // if col is even-> we go from top to bottom
        if(j & 1== 0){
            for(int i=0;i<m; i++){
            cout<< v[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1; i>0 ;i--){
                cout << v[i][j]<<" ";
            }
        }
          

    }
}

int main(){
    vector<vector<int>> v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    wavematrix(v);
    return 0;

}
