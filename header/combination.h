int combination(){

int c;

long unsigned int i=1,n,r,nfact=1,rfact=1,nrfact=1,den;

do{

printf ("Enter values of n and r:");

scanf ("%lu %lu", &n, &r);

for (i=1;i<=n;i++)

nfact=nfact*i;

for (i=1;i<=r;i++)

rfact=rfact*i;

for (i=1;i<=(n-r);i++)

nrfact=nrfact*i;

den=nrfact*rfact;

printf ("nCr=%lu\n",nfact/den);

printf ("Try again? (y=1/n=2) : ");

scanf ("%d",&c);
nfact=1;rfact=1;nrfact=1;
} while (c==1);

return 0;

}

