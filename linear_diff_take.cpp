#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*void binarySearch(int*arr,int start,int end,int key){
int count=0;
int mid=start+(end-start)/2;

    if(arr[mid]==key) {
        count++;
        return;
    }
        
    else if(arr[mid]>key){
        count++;
        binarySearch(arr,mid++,end,key);
    }
    else {
        count++;
         binarySearch(arr,start,end--,key);
    }

cout<<"count: "<<count<<endl;


}*/


void linearSearch(int*arr,int size,int key){
int count=0;
int ans=-1;
for(int i=0;i<size;++i){
   count++;
    if(arr[i]==key){
        ans=i+1;
        cout<<"steps: "<<count<<endl;
        break;
    }
}


}


int main(){

int size,key;
cout<<"Enter the size: ";
cin>>size;

cout<<"Enter the element in array: ";
int arr[size];
for(int i=0;i<size;++i) 
cin>>arr[i];

//int start=0,end=size-1;
cout<<"Enter the key:";
cin>>key;


linearSearch(arr,size,key);

//binarySearch(arr,start,end,key);


return 0;
}