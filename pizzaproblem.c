#include<stdio.h>
#include<conio.h>
int main()
{
	int min=0,pizzas,cook[50],n,i,r[50],sum[50],temp;
	scanf("%d",&pizzas);
	temp=pizzas;
	scanf("%d",&n);
	printf("cooks timings:\n");
	for(i=0;i<n;i++)
	{
	      printf("Rank of cook[%d]:",i+1);
	      scanf("%d",&cook[i]);
	}
	//initial setup 
	for(i=0;i<n;i++)
	{
		r[i] = 1;
		sum[i] = 0;
	}
	
	// calculate the minutes to cook pizzas
	while(pizzas>0)
	{
		min += 1;
		for(i=0;i<n;i++)
		{
			if((cook[i] * r[i] + sum[i]) == min)
			{
				sum[i] += cook[i] * r[i] ;
				r[i] += 1;
				pizzas -= 1;
			}
		}
	}
	printf("Minutes to cook %d pizzas : %d",temp,min);
}