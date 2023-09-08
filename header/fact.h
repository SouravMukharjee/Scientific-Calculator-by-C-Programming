int factorial(){
int c;
long unsigned int i,f=1,num;
do
{
printf ("Enter number:");
scanf ("%lu",&num);
for (i=1;i<=num;i++)
{
f=f*i;
}
printf ("Factorial of %lu is %lu\n",num,f);
printf ("Try again? (y=1/n=2) : ");
scanf ("%d",&c);f=1;
}while (c==1);


return 0;
}
