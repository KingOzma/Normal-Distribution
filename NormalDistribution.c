// Normal Distribution 
//
// 9/17/18

#include <stdio.h>
#define _USE_MATH_DEFINES /* needed to use M_PI */
#include <math.h>
#include <stdlib.h>
int main()
{
double u,s, N, y1, C1, C2, C3,w, i, x, M_PI, M_E;

printf("Enter Mean: ");
scanf("%lf", &u);
printf("Enter Standard Deviation: ");
scanf("%lf", &s);
printf("Enter Inputs: ");
scanf("%lf", &N);

    for (i=1; i<=N; i++)
    {
    printf("Enter Value: ");
    scanf("%lf", &x);
    w=(-1/2);
    printf("f(x)= ");
    C1 =1/(s*sqrt(2*M_PI));
    C2= (x-u)/s * (x-u)/s;
    C3= M_E * exp(w);
    y1 = C1 * exp(C3)*exp(C2);
    printf("%lf  \n", y1);
    }
system("End");
 }
