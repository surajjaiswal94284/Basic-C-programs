#include<stdio.h>
#include<conio.h>
float simple(float p,float r,float t);
main()
{
	float p,r,t,ans;
	clrscr();
	printf("Enter principle amt= ");
	scanf("%f",&p);
	printf("Enter rate= ");
	scanf("%f",&r);
	printf("Enter time= ");
	scanf("%f",&t);
	ans=simple(p,r,t);
	printf("SImple interest=%f",ans);
	getch();
}
float simple(float p,float r,float t)
{
	float si;
	si=(p*r*t) /100;
	return si;
}