
#include <stdio.h>
#include <stdlib.h>
//I've provided "min" and "max" functions in
//case they are useful to you
int min (int a, int b) {
  if (a < b) {
    return a;
  }
  return b;
}
int max (int a, int b) {
  if (a > b) {
    return a;
  }
  return b;
}

//Declare your rectangle structure here!
struct rect
{
  int x;
  int y;
  int height;
  int width;
};
typedef struct rect rectangle;

rectangle canonicalize(rectangle r)
{
  //WRITE THIS FUNCTION
  int w = r.width;
  int h = r.height;
  if((w<0)||(h<0))
    {
       if(w<0)
        {
          r.width = (-w);
          r.x = w + r.x;
        }
       if(h<0)
        {
          r.height = (-h);
          r.y = h + r.y;
        }
    }
  return r;
}
int findWidth(rectangle r1, rectangle r2)
{
  int x2r1,x2r2,x0,x,newWidth;
  /*
  if((r1.x<0)||(r2.x<0))
    {
      if(r1.x<0)
	{
	  x2r1 = r1.width + r1.x;
	}
      if(r2.x<0)
	{
	  x2r2 = r2.width + r2.x;
	}
      x0 = min(x2r1,x2r2);
      x = max(r1.x,r2.x);
      newWidth = x0 - x ;
      return newWidth;
    }
  */
  //  r1=canonicalize(r1);
  // r2=canonicalize(r2);
  x2r1 = r1.width + r1.x;
  x2r2 = r2.width + r2.x;
  x0 = min(x2r1,x2r2);
  x = max(r1.x,r2.x);
  newWidth = x0 - x ;
  return newWidth;
}
int findHeight(rectangle r1, rectangle r2)
{
  // r1=canonicalize(r1);
  // r2=canonicalize(r2);
  int y2r1 = r1.height+r1.y;
  int y2r2 = r2.height+r2.y;
  int y0 = min(y2r1,y2r2);
  int y = max(r1.y,r2.y);
  int newHeight = y0 - y;
  return newHeight;
}
rectangle intersection(rectangle r1, rectangle r2)
{
     r1 = canonicalize(r1);
     r2 = canonicalize(r2);
  //WRITE THIS FUNCTION
  rectangle rx;
  int newX = max(r1.x,r2.x);
  int newY = max(r1.y,r2.y);
  rx.x = newX;
  rx.y = newY;
  rx.width = findWidth(r1,r2);
  rx.height = findHeight(r1,r2);
  return rx;
  // return r1;
}

//You should not need to modify any code below this line
void printRectangle(rectangle r) {
  r = canonicalize(r);
  if (r.width == 0 && r.height == 0) {
    printf("<empty>\n");
  }
  else {
    printf("(%d,%d) to (%d,%d)\n", r.x, r.y, 
	                           r.x + r.width, r.y + r.height);
  }
}

int main (void) {
  rectangle r1;
  rectangle r2;
  rectangle r3;
  rectangle r4;

  r1.x = 2;
  r1.y = 3;
  r1.width = 5;
  r1.height = 6;
  printf("r1 is ");
  printRectangle(r1);

  r2.x = 4;
  r2.y = 5;
  r2.width = -5;
  r2.height = -7;
  printf("r2 is ");
  printRectangle(r2);
  
  r3.x = -2;
  r3.y = 7;
  r3.width = 7;
  r3.height = -10;
  printf("r3 is ");
  printRectangle(r3);

  r4.x = 0;
  r4.y = 7;
  r4.width = -4;
  r4.height = 2;
  printf("r4 is ");
  printRectangle(r4);

  //test everything with r1
  rectangle i = intersection(r1,r1);
  printf("intersection(r1,r1): ");
  printRectangle(i);

  i = intersection(r1,r2);
  printf("intersection(r1,r2): ");
  printRectangle(i);
  
  i = intersection(r1,r3);
  printf("intersection(r1,r3): ");
  printRectangle(i);

  i = intersection(r1,r4);
  printf("intersection(r1,r4): ");
  printRectangle(i);

  //test everything with r2
  i = intersection(r2,r1);
  printf("intersection(r2,r1): ");
  printRectangle(i);

  i = intersection(r2,r2);
  printf("intersection(r2,r2): ");
  printRectangle(i);
  
  i = intersection(r2,r3);
  printf("intersection(r2,r3): ");
  printRectangle(i);

  i = intersection(r2,r4);
  printf("intersection(r2,r4): ");
  printRectangle(i);

  //test everything with r3
  i = intersection(r3,r1);
  printf("intersection(r3,r1): ");
  printRectangle(i);

  i = intersection(r3,r2);
  printf("intersection(r3,r2): ");
  printRectangle(i);
  
  i = intersection(r3,r3);
  printf("intersection(r3,r3): ");
  printRectangle(i);

  i = intersection(r3,r4);
  printf("intersection(r3,r4): ");
  printRectangle(i);

  //test everything with r4
  i = intersection(r4,r1);
  printf("intersection(r4,r1): ");
  printRectangle(i);

  i = intersection(r4,r2);
  printf("intersection(r4,r2): ");
  printRectangle(i);
  
  i = intersection(r4,r3);
  printf("intersection(r4,r3): ");
  printRectangle(i);

  i = intersection(r4,r4);
  printf("intersection(r4,r4): ");
  printRectangle(i);


  return EXIT_SUCCESS;

}
