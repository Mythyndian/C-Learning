#include <stdio.h>

int SzukajBinarnie(int T[], int n1, int n2, int k);

int main(void){
	int tab[] = {1,3,6,8,12,16,25};
	printf("index of k : %d",SzukajBinarnie(tab,0,6,1));
	return 0;
}

int SzukajBinarnie(int T[], int n1, int n2, int k){
	int sz;
	while(1){
		if(k < T[n1] || k > T[n2])
			return -1;
		if(T[n2/2] == k){
			return n2/2;
		}
		if(T[n2/2] > k){
			if(T[n1+1] == k){
				return n1+1;
			}
			else
				if(T[n1] == k){
					return n1;
				}
					
				else{
					return n1+2;
				}
					
		}
		if(T[n2/2]<k){
			if(T[n2-1] == k){
				return n2-1;
			}
				
			else
				if(T[n2-2] == k){
					return n2-2;
				}
					
				else{
					
					return n2;
				}
					
					
			}
	else
		return -1;
	
	}
}
