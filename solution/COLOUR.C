/*write a menu driven program to perform following operation
date:23/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int c;
	clrscr();
	printf("\n\n\t\t MENU\N");
	printf("\t__________________");
	printf("\n\ta Pink");
	printf("\n\tb Yellow");
	printf("\n\tc Red");
	printf("\n\td Exit");
	printf("\n\t_________________\n");
	printf("\n\t\tEnter your choice:");
	scanf("%d",&c);
       //printf("\n\nYour choice is %d",c);
	switch(c)
	{
		case  ' a':
		case  ' A':
			printf("\n\nYour choice is pink");
			break;
		case  ' b':
		case  ' B':
			printf("\n\nYour choice is yellow");
			break;
		case  ' c' :
		case  ' C' :
			printf("\n\nYour choice is red");
			break;
		case  ' d' :
		case  ' D' :
			exit(0);
	       default:
			printf("\n\ninvalid choice\n\n enter number 1 to 4");
			break;

	}
	getch();
}