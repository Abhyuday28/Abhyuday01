/*#include<iostream>
using namespace std;
int main(){
    int n,i,j,lead;
    cout<<"no. of elements:\n";
    cin>>n;
    int arr[n];
    cout<<"elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"given array is:";
    for(int i=0;i<n;i++){
      cout<< arr[i]<< " ";
    }
    for( i=0;i<n;i++){
        for( j=i+1;j<n;j++){
            lead=0;
           if(arr[i]>arr[j+1]){
               lead++;
           }
        
        }
     }
     if(lead=n-i-1){
         cout<<"\nLEADERS are "<< arr[i] <<" "<<endl;
     }
     return 0;
    
}*/
#include<iostream>
using namespace std;

int main(){

int size;
cout<<"Enter the size: ";
cin>>size;

int arr[size];
cout<<"Enter the element: ";
for(int i=0;i<size;++i) cin>>arr[i];

cout<<"Leaders: ";
for(int i=0;i<size;++i){
int flag=0;
    for(int j=i+1;j<size;++j){
        if(arr[i]>arr[j]){
        flag++;
        }
    }
if(flag==size-i-1) cout<<arr[i]<<" ";
}

cout<<endl;

return 0;
}