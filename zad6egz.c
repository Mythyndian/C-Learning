int main(void){ 
 int tab[3][4]= {{3, 8, 9, 0},{3, 7, 9, 1},{0, 1, 6, 2}}; 
 int i=0,j; 
 while(i<3){ 
   for(j=i; j<4; j+=2)
   	if(tab[i][j]>4 )
   		printf("%d %d\n", i, j); //0 2
   ++i; 						//1 1
   								//2 2						   
   															   
 }
return 0;  
}
