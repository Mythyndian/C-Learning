#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct product{
    int id;
    char name[15];
    double weight;
    double price;
}PRODUCT ;
void  wprowadzwprowadz(PRODUCT *P,char *t,int size);
int main(void) {
   PRODUCT mleko,jajka,platki;
	PRODUCT *p;
	p = &jajka;
	wprowadz(&p,jajka.name,15);
	

	printf("name: %s %d %lf %lf",jajka.name,jajka.id,jajka.price,jajka.weight);
	return 0;

}
void wprowadz(PRODUCT *P,char *t,int size){
	printf("Podaj id: ");scanf("%d",&P->id);
	while(getchar() != '\n')
	printf("Podaj name: ");fgets(t,size,stdin);
	printf("Podaj weight: ");scanf("%lf",&P->weight);
	printf("Podaj price: ");scanf("%lf",&P->price);
	
}

