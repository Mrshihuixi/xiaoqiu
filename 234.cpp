
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i,j;
	int x = 5;
	int y = 10;
	
	int hight = 20;
	int velocity = 1;
	
	while (1)
	{
		x=x+velocity;
		system("cls");   // 清屏函数
		
		// 输出小球前的空行
		for(i=0;i<x;i++)
			printf("\n");
		for (j=0;j<y;j++)
			printf(" ");
		printf("o");  // 输出小球o
		printf("\n"); 
		
		if (x==hight)
			velocity = -velocity;
		if (x==0)
		{
			velocity = -velocity;
		}		
	}	
}

第四步，让程序更有趣，让小球斜着弹跳。主要思路是增加x，y两个方向的速度控制变量，一个碰到上下边界后改变正负号，一个碰到左右边界后改变正负号。
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i,j;
	int x = 0;
	int y = 5;
	
	int velocity_x = 1;
	int velocity_y = 1;
	int left = 0;
	int right = 20;
	int top = 0;
	int bottom = 10;
	
	while (1)
	{
		x = x+velocity_x;
		y = y+velocity_y;
		
		system("cls");   // 清屏函数
		// 输出小球前的空行
		for(i=0;i<x;i++)
			printf("\n");
		for (j=0;j<y;j++)
			printf(" ");
		printf("o");  // 输出小球o
		printf("\n"); 
		
		if ((x==top)||(x==bottom))
			velocity_x = -velocity_x;
		if ((y==left)||(y==right))
			velocity_y = -velocity_y;		
	}	
}
大家尽量养成良好的编码习惯，上面的边界坐标尽量不要在程序中写数字，可以用定义的变量或常量。这样程序可读性更好，后面也更容易调整。


第五步，介绍一个Sleep函数，可以让游戏中间等待，从而可以控制小球弹跳的速度。使用这个函数，需要#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<windows.h> 

void main()
{
	int i,j;
	int x = 0;
	int y = 5;
	
	int velocity_x = 1;
	int velocity_y = 1;
	int left = 0;
	int right = 20;
	int top = 0;
	int bottom = 10;
	
	while (1)
	{
		x = x + velocity_x;
		y = y + velocity_y;
		
		system("cls");   // 清屏函数
		// 输出小球前的空行
		for(i=0;i<x;i++)
			printf("\n");
		for (j=0;j<y;j++)
			printf(" ");
		printf("o");  // 输出小球o
		printf("\n"); 
		Sleep(50);  // 等待若干毫秒
		
		if ((x==top)||(x==bottom))
			velocity_x = -velocity_x;
		if ((y==left)||(y==right))
			velocity_y = -velocity_y;		
	}
}