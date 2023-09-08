int loga(){
int c;
long unsigned int a,logaa;
do
{
printf ("Find log of:");
scanf ("%lu",&a);
logaa= log(a);
printf ("Log of %lu is %lu\n",a,logaa);
printf ("Try again? (y=1/n=2) : ");
scanf ("%d",&c);
} while (c==1);


return 0;
}

