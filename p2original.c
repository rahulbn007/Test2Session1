#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1,float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the first point:\n");
  scanf("%f%f",x1,y1);
  printf("Enter the second point:\n");
  scanf("%f%f",x2,y2);
   printf("Enter the third point:\n");
  scanf("%f%f",x3,y3);
}
int is_triangle(float x1, float y1, float x2,float y2,float x3, float y3)
{
  float x=0.0;
  float b=0.0;
  float c=0.0;
  float s=0.0;
  float area=0.0;
  x=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
  b=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
  c=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
  s=(x+b+c)/2.0;
  area=sqrt(s*(s-x)*(s-b)*(s-c));
  if(area)
    return 1;
  return 0;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if(istriangle)
    printf("the points (%f,%f) (%f,%f) (%f, %f) form a        triangle.\n",x1,y1,x2,y2,x3,y3);
  else
   printf("the points (%f,%f) (%f,%f) (%f, %f) does not form  a triangle.",x1,y1,x2,y2,x3,y3);
}
int main()
{
  int a;
  float x1,y1,x2,y2,x3,y3;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  a=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,a);
  return 0;
}
