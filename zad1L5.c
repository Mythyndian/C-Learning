  #include <stdio.h>

int main()
{
    char c = 'c';   char *ch = &c;
    float f = 1.5;  float *fl = &f;
    int i = 1;  int *l = &i;
    double d = 12.1; double *p_d = &d;


    printf("char: %c\nfloat: %f\nint: %d\ndouble: %f\n\n",c,f,i,d);
    printf("char: %p\nfloat: %p\nint: %p\ndouble: %p\n\n",c,f,i,d);

    printf("char: %c\nfloat: %f\nint: %d\ndouble: %f\n\n",*ch,*fl,*l,*p_d);
    printf("char: %p\nfloat: %p\nint: %p\ndouble: %p\n\n",*ch,*fl,*l,*p_d); 
    printf("char jeszcze raz : %c",ch);
        return 0;
}
    //sama zmiennna wskaznikowa bez * zawiera adresz operator *(wyluskania/dereferencji) pozwala na sprawdzenie wartosci pod tym adresem
