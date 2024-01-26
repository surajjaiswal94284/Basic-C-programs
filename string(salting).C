#include<stdio.h>
#include<conio.h>
#include<string.h>
void pass(char str[],char str2[]);
int main()
{
	char str[50],str2[50]="123";
	clrscr();
	printf("Enter your password= ");
	gets(str);
	pass(str,str2);
}
void pass(char str[],char str2[])
{
	strcat(str,str2);
	printf("Your new password is %s",str);
	getch();
}