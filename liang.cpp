#include<stdio.h>
#include<string.h>
int channg1(char num[]);
void change2(int a);
int change1(char num[])
{
	if(strcmp("��",num)==0)return 0;
	else if(strcmp("һ",num)==0)return 1;
	else if(strcmp("��",num)==0)return 2;
	else if(strcmp("��",num)==0)return 3;
	else if(strcmp("��",num)==0)return 4;
	else if(strcmp("��",num)==0)return 5;
	else if(strcmp("��",num)==0)return 6;
	else if(strcmp("��",num)==0)return 7;
	else if(strcmp("��",num)==0)return 8;
	else if(strcmp("��",num)==0)return 9;
	else return -1;
	
}
int main()
{    int n,m,i;
	char a[11][10]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};
	char b[8][10]={"��","��","��","ô","��","��","��","��"};
	printf("��ȷʾ��\n");
	for(i=0;i<11;i++)
	{   
		printf("%s",a[i]);
		n=change1(a[i]);
		if(m!=-1)
		printf("pass\n");
		else
		printf("error\n");
	}
	printf("����ʾ��\n");
	for(i=0;i<8;i++)
	{
		printf("%s",b[i]);
		m=change1(b[i]);
		if(m!=-1)
		printf("pass\n");
		else
		printf("error\n");
	}
	printf("��������");
	return 0; 
	
	 
}
