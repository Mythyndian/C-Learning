#include <stdio.h>
#define N 4
int count(char t[][N], int x, int y);
void draw(char tab[][N]);
int main(void)
{
char
tab1[N][N] = {{'#','#','*','*'}, //0 0 9 9
			  {'#','#','*','#'}, //0 0 9 0
			  {'*','#','*','*'}, //9 1 9 9
			  {'*','#','*','#'}};//9 1 9 1
int tab2[N][N] = {0};
for(int i = 0; i < N; i++)
	for(int j = 0; j < N; j++)
		if(tab1[i][j] == '*')
			tab2[i][j] = 9;
else
	tab2[i][j] = count(tab1, i, j);

draw(tab2);
return 0;
}

int
count(char t[][N], int x, int y)
{
int temp = 0;
int index[8][2] = {{x-1,y-1},
				   {x-1,y},
				   {x-1,y+1},
				   {x,y-1},
				   {x,y+1},
				   {x+1,y-1},
				   {x+1,y},
				   {x+1,y+1}};
for(int i = 0; i < 8; i++)
{
	if(index[i][0] >= 0 && index[i][0] < N && index[i][1] >= 0 && index[i][1] < N && t[index[i][0]][index[i][1]] == '*')
		temp++;
}
return temp;
}

void draw(char tab[][N])
{
	for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++)
			printf("%2d",tab[i][j]);
	}
		//putchar('\n');
}
