#include <stdio.h>
int main()
{
  int a1,b1,c1,a2,b2,c2;
  scanf("%d %d %d",&a1,&b1,&c1);
  scanf("%d %d %d",&a2,&b2,&c2);
  
  int k=b1*(-1)*a2;
  int k1=c1*(-1)*a2;
  int l=b2*a1;
  int l1=c2*a1;
  
  int y_sum=k+l;
  int con_sum=k1+l1;
  
  int y=con_sum/y_sum;  // Finding the value of y
  int x=(c1-(b1*y))/a1;  // Finding the value of x
  
  printf("%d %d",x,y);   //printing the value of x and y
  return 0;
}