#define PI 3.14159265
int cota(){
int c;
do
{
double deg,rad,cot;
printf ("Enter angle in degrees:");
scanf ("%lf",&deg);
rad=(PI/180)*deg;
cot = 1/tan(rad);
printf ("Cot of %lf is %lf\n",deg, cot);
printf ("Try again? (y=1/n=2) : ");
scanf ("%d",&c);
} while (c==1);

return 0;
}
