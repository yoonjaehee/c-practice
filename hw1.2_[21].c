#include <stdio.h>
int main()
{
	int a, b, c, d, e, f, n1, n2, n3, n4, n5, n6;
	double y, x;
	printf("input coefficient a,b,c: "); //setting a,b,c
	scanf("%d,%d,%d", &a, &b, &c);
	printf("input coefficient d,e,f: "); //setting d,e,f
	scanf("%d,%d,%d", &d, &e, &f);
	printf("The two linear equations are: \n"); //setting equations
	printf("%dx+%dy+%d \n", a, b, c);
	printf("%dx+%dy+%d \n", d, e, f); 
	n1 = b*d;
	n2 = a*e;
	n3 = c*d;
	n4 = f*a;
	n5 = n1 - n2; 
	n6 = n4 - n3; 
	// using method of elimination by adding and subtracting
	y = (float)n6 / n5; // d(ax+by+c)=0 - a(dx+ey+f)=0  ¡æ  (bd-ae)y = af-cd  ¡æ  y= af-cd / bd-ae  ¡æ  y= n6 / n5 
	x = (float)(b*y + c)*-1 / a; // ax+by+c=0  ¡æ  ax=-by-c  ¡æ  x=(-by-c)/a  ¡æ  x=(b*y+c)*-1/a
	printf("Intersection point is ");
	printf("<%4.2f %4.2f> \n", x, y); //printf x,y for real number
	printf("Program ended with exit code: 0");
	return 0;
}
