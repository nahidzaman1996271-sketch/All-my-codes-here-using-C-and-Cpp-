#include <stdio.h>
#include <stdlib.h>

double triangle(double x, double y){
return 0.5*x*y;
}

int main(){
double x,y;
printf("Enter the values: ");
scanf("%lf %lf",&x,&y);
double r = triangle(x,y);
printf("The triangle is: %.lf\n",r);
}
