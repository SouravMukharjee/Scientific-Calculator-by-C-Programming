#define PI 3.14159265
int cose(){
int c;
do
{
double deg,rad,cosec;
printf ("Enter angle in degrees:");
scanf ("%lf",&deg);
rad=(PI/180)*deg;
cosec = 1/sin(rad);
printf ("Sine of %lf is %lf\n",deg, cosec);
printf ("Try again? (y=1/n=2) : ");
scanf ("%d",&c);
} while (c==1);

return 0;
}
