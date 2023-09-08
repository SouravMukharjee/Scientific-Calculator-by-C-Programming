int sum(){
long double a,b,num,num2;
printf ("Number=");
scanf ("%Lf",&a);
printf ("Add with=");
scanf ("%Lf",&b);
num=a+b;
do{
printf ("Number= %Lf\n",num);
printf ("Add with=");
scanf ("%Lf",&num2);
num=num+num2;
}while (1);
return 0;
}

