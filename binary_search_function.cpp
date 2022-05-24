#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int lo=0;
    int hi=n-1;
       cout<<key<< " is at position:\n";
    while(lo<=hi){
        int mid=(hi+lo)/2;
        if(arr[mid]==key){
            return mid+1;
        }else if(arr[mid]>key){
            hi = mid-1;
        }else{
            lo = mid+1;
        }
        
       
    }
     return -1;
}
int main()
{ cout<<"*NOTE* : Binary search only works in sorted elements\n";
    int n;
    cout<<"enter the no of elements\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array\n";
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
   
    int key;
    cout<<"\n element you want to search :\n";
    cin>>key;
    cout<<binarysearch(arr, n, key)<<endl;
   return 0;
}