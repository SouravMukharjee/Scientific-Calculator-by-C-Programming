#define PI 3.14159265
int sinn(){
int c;
double deg,rad,sine;
do
{
printf ("Enter angle in degrees:");
scanf ("%lf",&deg);
rad=(PI/180)*deg;
sine = sin(rad);
printf ("Sine of %lf is %lf\n",deg, sine);
printf ("Try again? (y=1/n=2) : ");
scanf ("%d",&c);
} while (c==1);
return 0;
}
