int power(){
int c;
long double a,x,ans;
do
{
printf ("Enter value of a:");
scanf ("%Lf",&a);
printf ("Enter value of x:");
scanf ("%Lf",&x);
ans = pow(a,x);
printf ("%Lf^%Lf= %Lf\n",a,x,ans);
printf ("Try again? (y=1/n=2) : ");
scanf ("%d",&c);
}while (c==1);


return 0;
}
