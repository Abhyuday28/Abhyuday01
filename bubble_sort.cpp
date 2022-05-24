#include<iostream>
using namespace std;
int swap(int arr[],int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    return 0;
}
int main()
    {
        int n;
        cout<<"no. of elements.\n";
        cin>>n;
        int arr[n];
        cout<<"elements:\n";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
         
            for(int j=0;j<n-i-1;j++){
                if(arr[j+1]<arr[j]){
                  
                    swap(arr,j+1,j);
                }
            }
       
            }
        
        cout<<"Sorted array (increasing order) :\n";
        for(int i=0;i<n;i++){
            cout<< arr[i]<<" ";
        }
      return 0;
    }
