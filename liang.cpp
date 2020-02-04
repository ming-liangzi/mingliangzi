#include<stdio.h>
#include<string.h>
int channg1(char num[]);
void change2(int a);
int change1(char num[])
{
	if(strcmp("零",num)==0)return 0;
	else if(strcmp("一",num)==0)return 1;
	else if(strcmp("二",num)==0)return 2;
	else if(strcmp("三",num)==0)return 3;
	else if(strcmp("四",num)==0)return 4;
	else if(strcmp("五",num)==0)return 5;
	else if(strcmp("六",num)==0)return 6;
	else if(strcmp("七",num)==0)return 7;
	else if(strcmp("八",num)==0)return 8;
	else if(strcmp("九",num)==0)return 9;
	else return -1;
	
}
int main()
{    int n,m,i;
	char a[11][10]={"零","一","二","三","四","五","六","七","八","九","十"};
	char b[8][10]={"望","仔","怎","么","不","喝","旺","仔"};
	printf("正确示范\n");
	for(i=0;i<11;i++)
	{   
		printf("%s",a[i]);
		n=change1(a[i]);
		if(m!=-1)
		printf("pass\n");
		else
		printf("error\n");
	}
	printf("错误示范\n");
	for(i=0;i<8;i++)
	{
		printf("%s",b[i]);
		m=change1(b[i]);
		if(m!=-1)
		printf("pass\n");
		else
		printf("error\n");
	}
	printf("结束测试");
	return 0; 
	
	 
}
