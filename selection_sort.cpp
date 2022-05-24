#include<iostream>
using namespace std;
int swap(int arr[],int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    return 0;
    }
int main(){
     int n;
     int arr[10];
        /*cout<<"no. of elements.\n";
        cin>>n;
        int arr[n];*/
        cout<<"no. of elements:\n";
        cin>>n;
        cout<<n<<" elements are:\n";
        for(int i=0;i<n;i++){
            cin>>arr[i];
            }
            for(int i=0;i<n;i++){
                int mi=i;
                for(int j=i+1;j<n;j++){
                    if(arr[j]<arr[mi]){
                        mi=j;
                    }
                  
                }
                if(mi!=i){
                    swap(arr,mi,i);
                }
            }
            cout<<"Sorted in non-increasing order:\n";
            for(int i=0;i<n;i++){
                cout<< arr[i]<< " ";
            }

return 0;

}