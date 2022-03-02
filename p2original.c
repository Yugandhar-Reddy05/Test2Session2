#include <stdio.h> 

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter a point\n");
  scanf("%f%f",x1,y1);
  printf("Enter a point\n");
  scanf("%f%f",x2,y2);
  printf("Enter a point\n");
  scanf("%f%f",x3,y3); 
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float area;
  area=(x1*(y1-y2)+x2*(y2-y3)+x3*(y3-y1))/2;
  return area;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if (istriangle==0)
    printf("the points will not form a triangle\n");
  else
    printf("the points will form a triangle\n");
  
}

int main()
{
  float x1,x2,x3,y1,y2,y3; 
  int istriangle;
  input_triangle(&x1,&x2,&x3,&y1,&y2,&y3);
  is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,istriangle);
  return 0;
}