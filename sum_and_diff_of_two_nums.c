#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    //printf("Enter two interger values: ");
    scanf("%d%d",&a,&b);
    
    //printf("Enter two float values: ");
    scanf("%f%f",&c,&d); 
    
    printf("%d %d\n",(a+b),(a-b));
    printf("%.1f %.1f\n",(c+d),(c-d));
    
    return 0;
}
