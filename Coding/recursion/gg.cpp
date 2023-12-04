#include<bits/stdc++.h>

using namespace std;

int missing(vector<int>& arr,int n){
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            return i+1;
        }
    }
}
int main(){
    vector<int> a = {1,2,4,5};
    missing(a,5);
    return 0;
}