#include <stdio.h>

int main(void){
	int n;
	int i = 0;
	double s = 0;
	printf("Podaj n: ");
	scanf("%d",&n);
	do{
		i+=1;
		s = s+1/i;
	printf("%.2f ",s);
	}while(i < n);
	return 0;
}
