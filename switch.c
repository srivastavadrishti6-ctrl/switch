#include<stdio.h>
int main()
{
int a, b;
char choice;
printf("Enter choice:");
scanf("%c", &choice);
printf("Enter two numbers:")
scanf("%d %d", &a,&b);
switch(choice){
    case '+': printf("sum=%d",a+b);
    break;
    case '-': if(a>b) 
    {
        printf("%d",a-b);
    }
    else
    {
        printf("%d",b-a);
    }
    case '*': printf("product=%d",(a*b));
    break;
    default: printf("Invalid input");
}
return 0;
}