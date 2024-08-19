#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int choti = factorial(n-1);
    int badi = n*choti;
    return badi;
}
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>> n;

    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
}
