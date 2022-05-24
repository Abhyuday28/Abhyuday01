#include<iostream>
using namespace std;
class AREA{
    public:
    float area_circle(int r){
        return 3.14*r*r;
    }
    float area_rectangle(int l,int b){
        return l*b;
    }
    float area_triangle(int base,int height){
        return 0.5*base*height;
    }
};
int main()
{
    cout<<"enter the value of case: ";
     int Case;
    cin>>Case;
    AREA a;
    if (Case==1){
        cout<<"Enter the radius:  ";
        int r;
        cin>>r;
        cout<<"Area of circle: "<<a.area_circle(r)<<endl;
    }
    if (Case==3){
        cout<<"Enter the l and b: ";
        int l,b;
        cin>>l>>b;
        cout<<"Area of rectangle: "<<a.area_rectangle(l,b)<<endl;
    }
    if(Case==2){
        cout<<"Enter the base and height: ";
        int base,height;
        cin>>base>>height;
        cout<<"Area of triangle "<<a.area_triangle(base,height)<<endl;
    }
    return 0;
    
}