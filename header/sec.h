#define PI 3.14159265
int seca(){
int c;
double deg,rad,sec;
do
{
printf ("Enter angle in degrees:");
scanf ("%lf",&deg);
rad=(PI/180)*deg;
sec = 1/cos(rad);
printf ("Sec of %lf is %lf\n",deg, sec);
printf ("Try again? (y=1/n=2) : ");
scanf ("%d",&c);
}while (c==1);


return 0;
}
