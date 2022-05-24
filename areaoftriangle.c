#include<math.h>
#include<stdio.h>
float area(float,float,float,float,float);
int main()
{
    float a,b,c;
    float ar,s;
    printf("enter the vertices of triangle\n");
    scanf("%f %f %f",&a,&b,&c);
 ar=area(a,b,c,s,ar);
    printf("Area of the triangle : %f",ar);

}
float area(float a,float b,float c,float s,float ar)
{
      s = (a+b+c)/2;
    ar = sqrt(s*(s-a)*(s-b)*(s-c));
    return (ar);
}