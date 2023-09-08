//mail@basistha.com
int options(){
int o;
printf ("OPTIONS:\n");
printf ("1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n5. Factorial\n6. Permutation\n7. Combination\n8. Prime or not\n9. List prime nos. between two numbers\n10. Sin\n11. Cos\n12. Tan\n13. Cosec\n14. Sec\n15. Cot\n16. Exponent(a^x)\n17. Log\n18. Exit\n");
printf ("Enter the option number:");
scanf ("%d",&o);
if (o==1)
{
sum();
}
if (o==2)
{
min();
}
if (o==3)
{
mult();
}
if (o==4)
{
div();
}
if (o==5)
{
factorial();
}
if (o==6)
{
permutation();
}
if (o==7)
{
combination();
}
if (o==8)
{
prime();
}
if (o==9)
{
primeinterval();
}
if (o==10)
{
sinn();
}
if (o==11)
{
cosi();
}
if (o==12)
{
tann();
}
if (o==13)
{
cose();
}
if (o==14)
{
seca();
}
if (o==15)
{
cota();
}
if (o==16)
{
power();
}
if (o==17)
{
loga();
}
if (o==18)
{
return 0;
}
else
{
options();
}
}
