#include<stdio.h>
void main()
{
int i,number;
 printf("Enter a number: ");
  scanf("%d",&number);
int fact=1;
    for(i=1;i<=number;i++){
      fact=fact*i;
  }
  printf("Factorial of %d is: %d",number,fact);
}
