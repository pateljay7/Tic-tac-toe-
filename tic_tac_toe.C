#include<stdio.h>
#include<conio.h>

int j=0,i=0,p=1,b=2,t,k;
char po,s;
char a[9]={'1','2','3','4','5','6','7','8','9'};
void show();
void show()
{
	printf("\t\t---|---|---\n");
	printf("\t\t %c | %c | %c",a[0],a[1],a[2]);
	printf("\n\t\t---|---|---\n");
	printf("\t\t %c | %c | %c",a[3],a[4],a[5]);
	printf("\n\t\t---|---|---\n");
	printf("\t\t %c | %c | %c",a[6],a[7],a[8]);
	printf("\n\t\t---|---|---");


}



void sym();
void sym()
{
	printf("\nplayer  1 ::  X\nplayer  2 ::  O");
}
void input();
void input()
{

	printf("\nplease enter possion =");
	fflush(stdin);
	scanf("%c",&po);



}
void play();
void play()
{


	for(i=0;i<=9;i++)
	{
		if(po==a[i])
		{
			a[i]='X';
		}
	}
}
void plays();
void plays()
{
	for(i=0;i<=9;i++)
	{
		if(po==a[i])
		{
			a[i]='O';
		}
	}
}

int check();
int  check()
{
	if(a[0]=='X'&&a[1]=='X'&&a[2]=='X'||a[3]=='X'&&a[4]=='X'&&a[5]=='X'||a[6]=='X'&&a[7]=='X'&&a[8]=='X')
	return(100);

	else if(a[0]=='O'&&a[1]=='O'&&a[2]=='O'||a[3]=='O'&&a[4]=='O'&&a[5]=='O'||a[6]=='O'&&a[7]=='O'&&a[8]=='O')
	return(200);

	else if(a[0]=='X'&&a[3]=='X'&&a[6]=='X'||a[1]=='X'&&a[4]=='X'&&a[7]=='X'||a[2]=='X'&&a[5]=='X'&&a[8]=='X')
	return(100);

	else if(a[0]=='O'&&a[3]=='O'&&a[6]=='O'||a[1]=='O'&&a[4]=='O'&&a[7]=='O'||a[2]=='O'&&a[5]=='O'&&a[8]=='O')
	return(200);


	else if(a[0]=='X'&&a[4]=='X'&&a[8]=='X'||a[2]=='X'&&a[4]=='X'&&a[6]=='X')
	return(100);

	else if(a[0]=='O'&&a[4]=='O'&&a[8]=='O'||a[2]=='O'&&a[4]=='O'&&a[6]=='O')
	return(200);


	return(300);

}
void main()
{






	for(j=0;j<10;j++)
	{
	 clrscr();
	 show();
	sym();
	input();
	play();


       k=check();
       if(k==100)
       {
       clrscr();
       show();
       printf("\n\nplayer 1  winner..");
       break;
       }
       else if(k==200)

       {
       clrscr();
       show();
       printf("\n\nplayer 2 winner..");
       break;
       }
       else
       {
       clrscr();
       show();
	printf("\n\nmatch drow..");

	}
	clrscr();
	show();
	sym();
	input();
	plays();
	 k=check();
       if(k==100)
       {
       clrscr();
       show();
       printf("\n\nplayer 1  winner..");
       break;
       }
       else if(k==200)

       {
       clrscr();
       show();
       printf("\n\nplayer 2 winner..");
       break;
       }
       else
       {
       clrscr();
       show();
	printf("\n\nmatch drow..");

	}
}


	getch();

}


