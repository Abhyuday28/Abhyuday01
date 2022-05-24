#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of elements:\n";
    cin>>n;
    int arr[n];
    cout<<"Elements are: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Search for :\n";
    int search;
    cin>>search;
    int hi=n-1;
    int lo=0;
    
    while(hi-lo > 1){
        int mid=(hi+lo)/2;
        if(arr[mid]<search){
            lo=mid+1;
        }
         else{
             hi=mid;
         }
    }
    if(arr[lo]==search){
        cout<<"found at: "<< lo+1<<endl;
    }
    else if(arr[hi]==search){
        cout<<"found at: "<< hi+1 <<endl;
    }
    else{
        cout<<"not found";
    }
    return 0;
}