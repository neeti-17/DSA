#include<iostream>
using namespace std;
bool palindrome (int x){
    int temp = x;
    double ans=0;
    while(x>0){
        int digit = x%10;
        ans = (ans*10)+digit;
        x=x/10;

    }
    if(temp==x){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int x;
    cout << "enter the number: "<<endl;
    cin>> x;
    int ans2=palindrome(x);
    cout << ans2 << endl;
    return 0;
}