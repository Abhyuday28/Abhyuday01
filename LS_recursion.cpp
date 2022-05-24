#include<iostream>
using namespace std;
int ls(int arr[],int n,int search)
{
    int i;
  if(n<=0){
      return -1;
  }
  else if(arr[n]==search){
      return 1; 
  }else{
    return ls(arr, n-1, search);
  }
  
  }

int main()
{
    int n,search,i;
    cout<<"no of elements:\n";
    cin>>n;
    int arr[n];
    cout<<"elements are:\n";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Search for:\n";
    cin>>search;
    int result;
    result = ls(arr,n,search);
    if(result==1){
        cout<<"element found" <<endl;
    }
    if(result==-1)
    {
        cout<<"not found.\n";
    }
    


    return 0;
}