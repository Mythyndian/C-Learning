void complete_array(double t[], int N);
void print_array(double t[], int N);
int main(void)
{
	double tab[10];
	complete_array(tab,10);
	print_array(tab,10);
	return 0;
}
void complete_array(double t[], int N)
{
	for(int i=0;i<N; i++)
  {
		printf("Podaj liczbe #%d: ",i+1);
		scanf("%lf",&t[i]);
	}
}
void print_array(double t[], int N)
{
	for(int i=0;i<N; i++)
  {
		printf("%.2f\n",t[i]);
	}
}
