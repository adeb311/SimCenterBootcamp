#include <stdio.h>
#include <time.h>
static int long numSteps = 100000;
int main () {
double pi = 0; double time = 0;
double dx = 1.0/numSteps; double x = 0;
clock_t start = clock();
for (int i =0; i < numSteps; i++) {
x += dx;
pi += dx*4.0/(1 + x*x);
}
clock_t stop = clock();
printf("%f\n",pi);
double T = (double)(stop - start)*1000./CLOCKS_PER_SEC;
printf("%f\n",T);
return(0);
}
