int div(){
long double a,b,num,num2;
printf ("Number=");
scanf ("%Lf",&a);
printf ("Divide by=");
scanf ("%Lf",&b);
num=a/b;
do{
printf ("Number= %Lf\n",num);
printf ("Divide by=");
scanf ("%Lf",&num2);
num=num/num2;
}while (1);
return 0;
}

