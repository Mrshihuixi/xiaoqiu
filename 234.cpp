
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
		system("cls");   // ��������
		
		// ���С��ǰ�Ŀ���
		for(i=0;i<x;i++)
			printf("\n");
		for (j=0;j<y;j++)
			printf(" ");
		printf("o");  // ���С��o
		printf("\n"); 
		
		if (x==hight)
			velocity = -velocity;
		if (x==0)
		{
			velocity = -velocity;
		}		
	}	
}

���Ĳ����ó������Ȥ����С��б�ŵ�������Ҫ˼·������x��y����������ٶȿ��Ʊ�����һ���������±߽��ı������ţ�һ���������ұ߽��ı������š�
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
		
		system("cls");   // ��������
		// ���С��ǰ�Ŀ���
		for(i=0;i<x;i++)
			printf("\n");
		for (j=0;j<y;j++)
			printf(" ");
		printf("o");  // ���С��o
		printf("\n"); 
		
		if ((x==top)||(x==bottom))
			velocity_x = -velocity_x;
		if ((y==left)||(y==right))
			velocity_y = -velocity_y;		
	}	
}
��Ҿ����������õı���ϰ�ߣ�����ı߽����꾡����Ҫ�ڳ�����д���֣������ö���ı�����������������ɶ��Ը��ã�����Ҳ�����׵�����


���岽������һ��Sleep��������������Ϸ�м�ȴ����Ӷ����Կ���С�������ٶȡ�ʹ�������������Ҫ#include<windows.h>
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
		
		system("cls");   // ��������
		// ���С��ǰ�Ŀ���
		for(i=0;i<x;i++)
			printf("\n");
		for (j=0;j<y;j++)
			printf(" ");
		printf("o");  // ���С��o
		printf("\n"); 
		Sleep(50);  // �ȴ����ɺ���
		
		if ((x==top)||(x==bottom))
			velocity_x = -velocity_x;
		if ((y==left)||(y==right))
			velocity_y = -velocity_y;		
	}
}