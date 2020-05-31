#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

float squareroot(int n) 
{
    float a = n; 
    float b = 1; 
    float e = 0.000001; 
    while (a - b > e) { 
        a = (a + b) / 2;
        b = n / a; 
    } 
    return a; 
}

unsigned long long int powerof(int a,int b)
{
	int i;
	unsigned long long int result = 1;
	for (i = 1; i <= b; i++)
	{
		result *= a;
	}
	return result;
	
}

unsigned long long int factorial(int n)
{
	int i = n;
    unsigned long long int result = 1;
	if( n == 0 || n == 1)
	     return n;
	while(i > 0)
	{
		result *= i;
		i--;
	}
	return result;
}

unsigned long long int powerof2(int n)
{
	int i;
	unsigned long long int result = 1;
	for (i = 1; i <= n; i++)
	{
		result *= 2;
	}
	return result;
}

int logn(int n,int b)
{
	return (n > b - 1) ? 1 + logn(n/b,b) : 0;
}

int main() 
{ 

    int choice,a,b;
    
    while(1)
    {
    	printf("1.Square Root\n");
    	printf("2.Power Of\n");
    	printf("3.Factorial\n");
    	printf("4.Power Of 2\n");
    	printf("5.Log\n");
    	printf("6.Exit\n");
    	printf("Enter Choice:");
    	scanf("%d",&choice);
    	if(choice == 1 || choice == 3 || choice == 4)
    	{
    		printf("Enter the number:");
    		scanf("%d",&a);
    	}
    	if(choice == 2 || choice == 5)
    	{
    		printf("Enter two numbers:");
    		scanf("%d %d",&a,&b);
    	}
    	switch(choice)
    	{
    		case 1: printf("Square Root of %d is %f\n\n",a,squareroot(a));
    		              break;
    		 case 2: printf("Power of %d raised to %d is %llu\n\n",a,b,powerof(a,b));
    		 break;
    		 case 3: printf("Factorial of %d is %llu \n\n",a,factorial(a));
    		 break;
    		 case 4: printf("Power Of 2 raised to %d is %llu \n\n",a,powerof2(a));
    		 break;
    		 case 5: printf("Log of %d on base %d is %d\n\n",a,b,logn(a,b));
    		 break;
    		case 6: printf("Program finished...");
    		exit(0);
    	    default: printf("Wrong Choice...choose from given choices\n\n");
    		break;	
    	}
    }
    getch();
} 