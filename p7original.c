#include<stdio.h>
#include<math.h>
typedef struct _point
{
  float x,y;
}Point;
typedef struct _line
{
  Point p1,p2;
  float distance;
}Line;
Point input_point()
{
  Point p;
  printf("Enter the coordinates\n");
  scanf("%f%f",&p.x,&p.y);
  return p;
}
Line input_line()
{
  Line l;
  l.p1=input_point();
  l.p2=input_point();
  return l;
}
void find_length(Line *l)
{
  l->distance=sqrt(((l->p2.x-l->p1.x)*(l->p2.x-l->p1.x))+((l->p2.y-l->p1.y)*(l->p2.y-l->p1.y)));
}
void output(Line l)
{
  printf("The length of the line with coordinates\n(%f,%f)\n(%f,%f)\nis %f",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}
int main()
{
  Line l;
  l=input_line();
  find_length(&l);
  output(l);
  return 0;
}