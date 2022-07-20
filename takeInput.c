#include <stdio.h>
#include <conio.h>

typedef struct 
{
	char name[40];

}personalInfo;

typedef struct 
{
	char title[50];
	long int amount;
	char remark[100];
}finInfo;


 personalInfo personalInfoInput()
{
	personalInfo p;
	printf("Enter your name: ");
	fgets(p.name, 40, stdin);
	return p;
}

void personalInfoOutput(personalInfo p)
{
	printf("Name: %s", p.name);

}

finInfo finInfoInput()
{
	finInfo f;
	printf("Enter the title of the transaction: ");
	fgets(f.title, 50, stdin);
	printf("Enter the amount: ");
	scanf("%ld", &f.amount);
	fflush(stdin);
	printf("Enter the remark: ");
	fgets(f.remark, 100, stdin);
	return f;
}

void finInfoOutput(finInfo f)
{
	printf("Title: %sAmount: %ld\nRemark: %s\n", f.title, f.amount, f.remark);
}
int main(void)
{
	personalInfo p;
	finInfo f;

	p = personalInfoInput();
	f = finInfoInput();
	personalInfoOutput(p);
	finInfoOutput(f);
	getch();
	return 0;
}