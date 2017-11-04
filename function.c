#include <math.h>  
#include <stdio.h>  
int main()  
{  
    double  a, b, c, disc, x1, x2;  
    do  
    {  
        printf("Input  a, b, c: ");//a、b、c分别为二次项一次项常数项系数。  
        scanf("%lf,%lf,%lf", &a, &b, &c);  
        disc = b*b - 4*a*c;  
        if (disc < 0)  
            printf("disc=%lf \n Input again!\n", disc);  
    } while (disc<0);  
    printf("*******the result*******\n");  
    x1 = (-b+sqrt(disc))/(2*a);  
    x2 = (-b-sqrt(disc))/(2*a);  
    printf("\nx1=%6.2lf\nx2=%6.2lf\n", x1, x2);  
}  
