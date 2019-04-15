#include <stdio.h>

int main(void){
	int h,i,n = 11;
	int a[] = {1,2,3,4,5,6,7,8,9,10,11};
	for(i = 0;i < n;i+=2){
		h= a[n-i-1];
		a[n-i-1] =a[i];
		a[i]=h;
	}
	for(int j = 0;j < n;j++){
		printf("%d\n",a[j]);
	}
}
