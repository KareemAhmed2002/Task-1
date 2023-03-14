#include<stdio.h>
void main(){
float a,b,c;
printf("enter the frist number");
scanf("%f",&a);
printf("enter the second number");
scanf("%f",&b);
printf("enter the third number");
scanf("%f",&c);
if(a>b&&a>c)
    printf("the largest number is %f",a);
else if (b<a&&b<c)
     printf("the largest number is %f",b);
else
     printf("the largest number is %f",c);
}
