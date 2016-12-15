#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char player1[10];
char player2[10];
char arr[3][3];
int i,j,a,b,result,sym,sum=0;


void place(int a,int x,int y)
{

	if(a==1)
	{
		if(arr[x][y]==NULL)
			arr[x][y]='X';
		else
			printf("ALready Occupied \n");	
	}
	else if(a==2)
	{
		if(arr[x][y]==NULL)
			arr[x][y]='O';
		else
			printf("ALready Occupied \n");	
	}
}

void draw()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==NULL)
				printf("_ ");
			else
				printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
}

int check(int player,int x,int y)
{
	
	if(player==1)
		sym='X';
	else
		sym='O';
	
	/* upper row condition */	
	if(x==0 && y==0)
	{
		if(arr[x][y+1]==sym && arr[x][y+2]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x+1][y+1]==sym && arr[x+2][y+2]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x+1][y]==sym && arr[x+2][y]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
	}
	else if(x==0 && y==1)
	{
		if(arr[x][y-1]==sym && arr[x][y+1]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x+1][y]==sym && arr[x+2][y]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
	}
	else if(x==0 && y==2)
	{
		if(arr[x][y-1]==sym && arr[x][y-2]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x+1][y-1]==sym && arr[x+2][y-2]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x+1][y]==sym && arr[x+2][y]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
	}
	/* bottom row condition */
	else if(x==2 && y==0)
	{
		if(arr[x-1][y]==sym && arr[x-2][y]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x-1][y+1]==sym && arr[x-2][y+2]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x][y+1]==sym && arr[x][y+2]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
	}
	else if(x==2 && y==1)
	{
		if(arr[x-1][y]==sym && arr[x+1][y]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x-1][y]==sym && arr[x-2][y]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
	}
	else if(x==2 && y==2)
	{
		if(arr[x][y-1]==sym && arr[x][y-2]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x-1][y-1]==sym && arr[x-2][y-2]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x-1][y]==sym && arr[x-2][y]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
	}
 /* middle row condition */
 	else if(x==1 && y==0)
	{
		if(arr[x-1][y]==sym && arr[x+1][y]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x-1][y+1]==sym && arr[x-2][y+2]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x][y+1]==sym && arr[x][y+2]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
	}
	else if(x==1 && y==1)
	{
		if(arr[x-1][y]==sym && arr[x+1][y]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x-1][y-1]==sym && arr[x+1][y+1]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x-1][y+1]==sym && arr[x+1][y-1]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
	}
	else if(x==1 && y==2)
	{
		if(arr[x-1][y]==sym && arr[x+1][y]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
		else if(arr[x][y-1]==sym && arr[x][y-2]==sym)
			{printf("winner is : %c \n",sym);draw();exit(0);}
	}
 	
 
}


int main()
{
	int count=0;
	printf("\n enter player 1 name :");
	scanf("%s",player1);
	printf("\n enter player 2 name :");
	scanf("%s",player2);
	
	do
	{
		printf("\n enter the place for one ");
		scanf("%d%d",&a,&b);
		if(count>3)
			check(1,a,b);
		place(1,a,b);
		draw();
		count++;
		
		printf("\n enter the place for two");
		scanf("%d%d",&a,&b);
		if(count>3)
			check(2,a,b);
		place(2,a,b);
		draw();
		count++;
				
	}while(count<9);
	
	return 0;	
}
