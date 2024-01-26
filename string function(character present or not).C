void occ(char str[],char ch);
int main()
{
	char str[20],ch;
	clrscr();
	printf("Enter string= ");
	gets(str);
	printf("Enter which character to check= ");
	scanf("%c",&ch);
	occ(str,ch);
}
void occ(char str[],char ch)
{
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			count++;
		}
	}
	if(count>0)
	{
		printf("%c is present",ch);
	}
	else
	{
		printf("%c is not present",ch);
	}
	getch();
}