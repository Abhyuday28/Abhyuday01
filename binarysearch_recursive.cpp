#include<iostream>
using namespace std;
int bs(int arr[],int l ,int r,int search)
{
    if(r>=l){
        int mid=l+(r-l)/2;
   
    if(arr[mid]==search){
        return mid;
    }
    if(arr[mid]<search){
        return bs(arr,mid+1,r,search);
    }
    else
    return bs(arr,l,mid-1,search);
    }
    return -1;
}

int main(){
    int n,search;
    cout<<"no. of elements:\n";
    cin>>n;
    int arr[n];
    cout<<"elements are:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"search for:\n";
    cin>>search;
    int result=bs(arr,0,n-1,search);
    if(result==-1){
        cout<<"not available.\n";
    }
    else{
        cout<<"found at:"<< result+1 <<endl;
    }
    return 0;

}