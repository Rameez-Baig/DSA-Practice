#include <bits/stdc++.h>

using namespace std;

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
    sort(array.begin(),array.end());
        int i=1;
        for(int j=0;j<n;j++)
        {
            if(array[j]==i)
            i++;
            else return i;
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> array(n-1);
        for(int i=0;i<n-1;++i) cin>> array[i];
        Solution o;
        cout<<o.missingNumber(array,n)<<endl;
    }
    return 0;
}