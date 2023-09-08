int mult(){
long double a,b,num,num2;
printf ("Number=");
scanf ("%Lf",&a);
printf ("Multiply with=");
scanf ("%Lf",&b);
num=a*b;
do{
printf ("Number= %Lf\n",num);
printf ("Multiply with=");
scanf ("%Lf",&num2);
num=num*num2;
}while (1);
return 0;
}

