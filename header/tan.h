#define PI 3.14159265
int tann(){
int c;
double deg,rad,tang;
do
{
printf ("Enter angle in degrees:");
scanf ("%lf",&deg);
rad=(PI/180)*deg;
tang = tan(rad);
printf ("Tan of %lf is %lf\n",deg, tang);
printf ("Try again? (y=1/n=2) : ");
scanf ("%d",&c);
}while (c==1);


return 0;
}
