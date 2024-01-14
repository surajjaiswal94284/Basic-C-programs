float m(float cm);
float km(float cm);
main()
{
	float cm,a,b;
	clrscr();
	printf("Enter centimeter= ");
	scanf("%f",&cm);
	a=m(cm);
	printf("Meter=%f",a);
	b=km(cm);
	printf("\nKilometer=%f",b);
	getch();
}
float m(float cm)
{
	return cm/100.0;
}
float km(float cm)
{
	return cm/100000.0;
}
