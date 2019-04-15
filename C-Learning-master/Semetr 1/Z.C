#include <stdio.h>
typedef struct product{
    int id;
    char name[15];
    double weight;
    double price;
} PRODUCT;
int main(void){
    PRODUCT two;
    PRODUCT four;
	printf("Podaj id: ");
    scanf("%d", &two.id);
    printf("name: ");
    while(getchar() != '\n')
        continue;
    fgets(two.name,15,stdin);
    printf("waga: ");
    scanf("%lf",&two.weight);
    printf("cena: ");
    scanf("%lf",&two.price);
    PRODUCT *three;
    three->id = &four.id;
    three->name = &four.name;
    three->price = &four.price;
    three->weight = &four.weight
    printf("Podaj id: ");
    scanf("%d",&three->id);
    printf("Name: ");
    fgets(three->name,15,stdin);//crashuje dlaczego?
    printf("Waga: ");
    scanf("%lf",&three->weight);
    printf("cena: ");
    scanf("%lf",&three->price);
    PRODUCT one = {1,"piwo",0.5,255};
    printf("\n%d %s %.2f %.2f\n", one.id, one.name,one.weight,one.price);	 // wypisz 1
    printf("%d ",two.id); // wypisz 2
    for(int i=0; i<15 &&two.name[i] !='\n';i++){
        printf("%c",two.name[i]);
    }
    printf(" %.2f %.2f",two.weight,two.price);

    printf("\n%d ",three->id); // wypisz 3
    for(int i=0; i<15 &&three->name[i] !='\n';i++){
        printf("%c",three->name[i]);
    }
    printf(" %.2f %.2f",three->weight,three->price);
    return 0;
}
