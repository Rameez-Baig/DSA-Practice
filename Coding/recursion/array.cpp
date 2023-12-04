#include<iostream>
using namespace std;
// Checking if array is sorted or not
bool issorted(int arr[],int size){
    //base case
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans = issorted(arr+1,size-1);
        return ans;
    }
}
int getsum(int arr[],int size){
    // base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remaining = getsum(arr+1,size-1);
    int sum = arr[0]+remaining;
    return sum; 
}
bool linearsearch(int arr[],int size, int key){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return 0;
    }
    else{
        bool remainingpart = linearsearch(arr+1,size-1,key);
        return remainingpart;
    }
}
int main(){
    int arr[5]={3,5,1,2,6};
    int size =5;
    // bool ans = issorted(arr,size);
    // if(ans){
    //     cout<<"Yes the array is sorted";
    // }
    // int sum = getsum(arr,size);
    // cout<<"Sum of the array is : "<<sum<<endl;
    int key = 2;
    bool ans = linearsearch(arr,size,key);
    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    return 0;
}