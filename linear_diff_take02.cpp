#include<iostream>
using namespace std;
int linearsearch(int arr[],int n, int search){
    int count=0;

    for(int i=0;i<n;i++){
        count++;
        if(arr[i]==search){
               cout<<"No. of steps: "<< count<< endl;
}
    }
return 0;
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