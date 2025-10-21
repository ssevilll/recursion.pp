#include<stdio.h>
#include<math.h>

double f(double x, double y) {
    return pow(x,2)+sin(x*y)-pow(y,2);
}
int main() {
   // example below, replace it with your solution
   double x,y;

   while (scanf ("%lf %lf", &x, &y)==2) {
    printf ("%.4lf\n", f(x,y));
   }
   
   return 0;
}
