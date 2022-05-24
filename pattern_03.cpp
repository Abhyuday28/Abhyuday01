#include<iostream>
using namespace std;
int main(){
 int n;
 int l,b;
 cout<<"n = ";
 cin>>n;
 //1
 for(int i=1;i<=n;i++){
     for(int j=i;j<=n;j++){
         cout<<"* ";
     }
     cout<<endl;
 }
  cout<<endl;
  //2
 for(int i=1;i<=n;i++){
     for(int j=1;j<=i;j++){
         cout<<"* ";
     }
     cout<<endl;
 }
 cout<<endl;
 //3
 for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
         cout<<"* ";
     }
     cout<<endl;
 }
 cout<<endl;
 //4
 for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
         if(i==1||i==n||j==1||j==n){
           cout<<" * ";
         }
         else
         cout<<"   ";
     }
     cout<<endl;
 }//5
  for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
        if((i+j)<=n)
       // if(j<=n-i)
       {
 cout<<"  ";
        }
 else{
 cout<<"* ";
 }
 }
cout<<endl;
}
//6
 cout<<"enter l: ";
 cin>>l;
 cout<< "enter b: ";
 cin>>b;
  for(int i=1;i<=l;i++){
     for(int j=1;j<=b;j++){
         cout<<"* ";
     }
     cout<<endl;
 }

 return 0;
}