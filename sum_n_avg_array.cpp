#include<iostream>
using namespace std;
int main(){
    int e,sum=0;
    cout<<"count :";
    cin>>e;
    int arr[e];
    cout<<"Elements: ";
    for(int o=0;o<e;o++){
      cin>>arr[o];
    }
    
     for(int o=0;o<e;o++){
           sum+=arr[o];
     }
     cout<<"\nThe Sum of given array: "<<sum;
     float avg=sum/e;
     cout<<"\nThe Average of given array: "<<avg;

return 0;
}