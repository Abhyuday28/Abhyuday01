#include<iostream>
using namespace std;
int main(){
    int n, key, search, i;
    cout<<"no. of elements :\n";
    cin>>n;
    int arr[n];
    cout<<"elements are:\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"search for:\n";
    cin>>search;
    for(i=0;i<n;i++)
        if(arr[i]==search)
        break;
        if(i<n)
        cout<<"found at:"<< i+1<<endl;
        
        else
        cout<<"not found\n";  
        
    return 0;
}