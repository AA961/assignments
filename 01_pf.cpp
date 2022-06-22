#include <stdio.h>
int main()
{
    int a , b ,c ,d;
    a = 2;
    b = a;
    --a; // decreament using prefix
    printf("%d \n",a);
    a = 2;
    a--; // decreamemt using postfix
    printf("%d \n",a);
    a = 2;
    a -= 1; //decreament using compouned statement
    printf("%d \n",a);
    
    a = 2;
    
    c = --b; // using prefix
    printf("%d \n",c);

	d = b--; //using postfix
	printf("%d \n",d);
    
    
    

}