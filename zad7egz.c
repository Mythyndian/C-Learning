int f(int *p){ 
  return (*p)--; 
}  
int g(int n){   
  return n*3; 
} 
int main(void){ 
 int i= 1, j=2; 
printf("\n %d %d\n", 2*f(&i)+2, g(f(&j)+g(1)));//2 15  
printf("\n %d %d\n", i,j); // 0 1
return 0; 
} 
