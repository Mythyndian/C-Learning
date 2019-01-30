#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define N 4
#define NAME 15
typedef struct product{
    int id;
    char name[15];
    double weight;
    double price;
}PRODUCT ;
void wprowadz(PRODUCT *P,char *t,int size);
void wypisz(PRODUCT *t,int size);
int main(void) {
   PRODUCT mleko,jajka,platki;
	PRODUCT *p;
	p = &jajka;
	PRODUCT sklep[4];
	wprowadz(&sklep[0],sklep[0].name,NAME);
	for(int i = 0; i < N; i++){
		printf("id: %d\n name: %s\n weight: %.2f\n price: %.2f",sklep[i].id,sklep[i].name,sklep[i].weight,sklep[i].price);
}
	return 0;
	
	
}
void wprowadz(PRODUCT *P,char *t,int size){
	for(int i = 0; i<N;i++){
			printf("Podaj id: ");scanf("%d",&P->id);
	while(getchar() != '\n')
		continue;
	printf("Podaj name: ");fgets(t,NAME,stdin);
	printf("Podaj weight: ");scanf("%lf",&P->weight);
	printf("Podaj price: ");scanf("%lf",&P->price);
	P++;
	t++;
	}
void wypisz(PRODUCT *t ,int size){
	for(int i = 0; i < N; i++){
		printf("id: %d\n name: %s\n weight: %.2f\n price: %.2f",t[i].id,t[i].name,t[i].weight,t[i].price);
	}
}
	
}

