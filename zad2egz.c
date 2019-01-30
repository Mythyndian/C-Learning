struct wektor{ 
  int y, x; 
}; 
void f(struct wektor w){ 
 printf("%d %d\n", w.y, w.x);   
} 
int main(void){ 
 struct wektor a[5]={{17,2},{3,9},{8,5},{6,10},{7,0}}; 
 int i=0,k =sizeof a/sizeof a[0]; 
 for(; i<k; ++i) if(a[i].x < a[i].y) f(a[i]); 
 	//17 2
	 //8 5
	 //7 0										  
 											  
 return 0; 
}
