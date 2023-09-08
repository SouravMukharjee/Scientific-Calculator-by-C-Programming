#define PI 3.14159265
int cosi(){
int c;
double deg,rad,cosine;
do
{
printf ("Enter angle in degrees:");
scanf ("%lf",&deg);
rad=(PI/180)*deg;
cosine = cos(rad);
printf ("Cosine of %lf is %lf\n",deg, cosine);
printf ("Try again? (y=1/n=2) : ");
scanf ("%d",&c);
} while (c==1);


return 0;
}
