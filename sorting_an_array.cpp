#include<iostream>
using namespace std;
int main(){
    int e;
    cout<<"count :";
    cin>>e;
    int arr[e];
    cout<<"Elements: ";
    for(int o=0;o<e;o++){
      cin>>arr[o];
    }
    cout<<"Given array: ";
    for(int o=0;o<e;o++){
      cout<<arr[o]<<" ";
    }
    for(int o=0;o<e;o++){
      int min=o;
      for(int p=o+1;p<e;p++){
       if(arr[o]>arr[p]){
         min=p;
       } 
       else{
         int temp=arr[o];
         arr[o]=arr[p];
         arr[p]=temp;
       }
      }
    }
    cout<<"\nNew array is: ";
    for(int o=0;o<e;o++){
cout<<arr[o]<<" ";
    }
return 0;
}