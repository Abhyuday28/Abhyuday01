#include<iostream>
using namespace std;
int main()
{   int n1,i,j;

    cout<<"no of elements in 1st array: ";
    cin>>n1;
    int arr[n1];
    cout<<"\nelments: ";
    for(int i=0;i<n1;i++){
        cin>>arr[i];
    }
    cout<<"no of elements in 2nd array: ";
  cout<<"enter "<< n1<<" elements of 2nd array: ";
    int arr1[n1];
    for(int j=0;j<n1;j++){
        cin>>arr1[j];
    }
    int sum=arr[i]+arr1[j];
    cout<<" Sum of these array :"<<endl;
   for(int k=0;k<n1;k++){
       cout<< sum;
   }
}