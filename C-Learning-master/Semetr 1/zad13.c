#include <stdio.h>

int main(void)
{
int kw,reszta,bilon,b_10,b_20,b_50,b_100,b_200,b_500;
printf("Wprowadz kwote w zl:");
scanf("%d",&kw);
printf("%d\n",kw);
reszta = kw % 500;

if(reszta != 0)
	{
	b_500 = 0;
	reszta = reszta % 200;
		if(reszta != 0)
			{
			reszta = reszta % 100;
			b_200 = 0;
			if(reszta != 0)
				{
				b_100 = 0;
				reszta = reszta % 50;
				if(reszta != 0)
					{
					b_50 = 0;
					reszta = reszta % 20;
					if(reszta != 0)
						{
						b_20 = 0;
						reszta = reszta % 10;
							if(reszta != 0)
							{
							b_10 = 0;
							bilon = reszta;						
							}
						}	else if(reszta == 0){
								b_10 = kw / 10;
								}
					}	else if(reszta == 0){
							b_20 = kw / 20;
							}
				}	else if(reszta == 0){
						b_50 = kw / 50;
						}
			}	else if(reszta == 0){
					b_100 = kw / 100;
					}
		else if(reszta == 0){
			b_200 = kw / 200;
			}	
	}
	else if(reszta == 0){
		b_500 = kw / 500;
		}

printf("nominal 500 zl: %d \n",b_500);
printf("nominal 200 zl: %d \n",b_200);
printf("nominal 100 zl: %d\n",b_100);
printf("nominal 50 zl: %d\n",b_50);
printf("nominal 20 zl: %d\n",b_20);
printf("nominal 10 zl: %d\n",b_10);
printf("nominal bilon: %d \n",bilon);
return 0;	
}
