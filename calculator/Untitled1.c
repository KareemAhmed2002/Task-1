#include<stdio.h>
void main(){
    float n1,n2;
    char x;
    float result ;
 printf("enter the frist number");
 scanf(" %f",&n1);
 printf("enter the second number");
 scanf(" %f",&n2);
printf("choose the operation + - * /");
scanf(" %c",&x);
switch(x){
case '+':
   result=n1+n2;
   break;
case '-':
   result=n1-n2;
   break;
case '*':
   result=n1*n2;
   break;
  case '/':
   result=n1/n2;
   break;

}
printf("the result is %f",result);
}

