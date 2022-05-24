#include<iostream>
using namespace std;
int linearsearch(int arr[],int n, int search){
    cout<<"found at:"<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]==search){
               return i+1;
}
    }
    return -1; //element not found.
}
int main()
{
    int n,search,i;
    cout<<"no of elements in array:\n";
    cin>>n;
    int arr[n];
    cout<<"elements are:\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"search for:\n";
    cin>>search;
    cout<<linearsearch(arr,n,search)<<endl;
    return 0;
}
