#include <stdio.h>

int main(void)
	{
	const char *slowa[3];
	int i;
	printf("Ile znakow chcesz wprowadzic\n");
	for(i = 0; i < 3; i++)
		{
		printf("Wprowadz slowo: ");
		scanf("%s",*slowa[i]);
		printf("%s \n",slowa[i]);
		}
	
	//printf("%s \n",slowa[i-1]);
	//printf("%s \n",slowa[i]);
		
	return 0;
	}
