int min(){
long double a,b,num,num2;
printf ("Number=");
scanf ("%Lf",&a);
printf ("Substract by=");
scanf ("%Lf",&b);
num=a-b;
do{
printf ("Number= %Lf\n",num);
printf ("Substract by=");
scanf ("%Lf",&num2);
num=num-num2;
}while (1);
return 0;
}

