#include <iostream>
using namespace std;

int A[10];
int B[10];
int sum[10];
int x,z;
main()
{
cout<<"Enter elements for array A: "<<endl;
    for(x=0; x<=4; x++) 
        cin>>A[x];
cout<<"Enter elements for array B: "<<endl;
    for(x=0; x<=4; x++)
        cin>>B[x];

//cout<<"New content of array A: "<<endl;
    //for(x=0; x<=4; x++)
       // cout<<B[x]<<" ";
//cout<<endl<<"New content of array B: "<<endl;
    //for(x=0; x<=4; x++){
 //cout<<A[x]<<" ";
   // }
       cout<<"Sum: ";
     for(x=0; x<=4; x++)    
cout<<A[x]+B[x]<<" ";

return 0;
}