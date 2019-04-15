void f(int n, int *k){  
n++; --*k; 
} 
int main(void){ 
int a=1, b=7; 
f(a++, &b);    
printf ("a=%d b=%d \n", a, b ); //a = 2 b = 6     
f(++b, &a);    
printf ("a=%d b=%d \n", a, b );//a = 1 b = 6 
return 0; 
} 
