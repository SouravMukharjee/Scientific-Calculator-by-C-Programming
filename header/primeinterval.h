int primeinterval(){
int c;
long unsigned int i,a,b,n;
do
{
printf ("Enter first number:");
scanf ("%lu",&a);
printf ("Enter second number:");
scanf ("%lu", &b);
printf ("Prime numbers between %lu and %lu are:\n",a,b);
n=a;
while (n<=b)
{
	i=2;
	while (i<n)
	{
		if (n%i==0)
		break;
		
		else
		i++;
	}
if (i==n)
printf ("%lu\n",n);
n++;
}
printf ("Try again? (y=1/n=2) : ");
scanf ("%d",&c);
}while (c==1);


return 0;
}
