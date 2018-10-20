#include <stdio.h>

int main(void)
{
	float masa,ciezar;
	const float g = 9.81;
	printf("Podaj mase ( > 0): ");
	scanf("%f",&masa);
	printf("%.2f",masa);
	ciezar = masa * g;
	
	printf("Sila przyciagania ziemskiego na cialo o masie %.2f kg\nna terenie Polski wynosi %f",masa,ciezar);
	printf("\n");
	printf("\n");
	printf("Przyspieszenie grawitacyjne na terenie Polski wynosi\nw przyblizeniu 9.81 m/s^2, a oznaczamy je liter 'g'.");
	return 0;
}
