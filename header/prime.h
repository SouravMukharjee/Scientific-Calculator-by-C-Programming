int prime(){
int c;
long unsigned int i=2,num;
do
{
printf ("Enter the number:");
scanf ("%lu", &num);
while (i<=num-1)
{
if (num%i==0)
{
printf ("Not Prime number\n");
break;
}
i++;
}
if (num==i)
{
printf ("Prime\n");
}
printf ("Try again? (y=1/n=2) : ");
scanf ("%d",&c);
}while (c==1);


return 0;
}
