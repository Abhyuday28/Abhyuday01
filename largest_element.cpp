#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"no of elements: ";
    cin>>n;
    int arr[n];
    cout<<"elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   /* int big;
    big=arr[0];
  
    for(int i=0;i<n;i++){
        if(big>arr[i]){
             big==arr[3];
            }
        else{
            big=arr[i];
        }
    }
    cout<<"Largest: "<< big<<endl;
return 0;
}*/
 int small;
    small=arr[0];
  
    for(int i=0;i<n;i++){
        if(small<arr[i]){
             small==arr[3];
            }
        else{
            small=arr[i];
        }
    }
    cout<<"Smallest: "<< small<<endl;
return 0;
}