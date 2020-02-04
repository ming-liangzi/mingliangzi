#include<stdio.h>
#include<string.h>
int channg1(char num[]);
void change2(int a);
int change1(char num[])
{
	if(strcmp("零",num)==0)return 0;
	if(strcmp("一",num)==0)return 1;
	if(strcmp("二",num)==0)return 2;
	if(strcmp("三",num)==0)return 3;
	if(strcmp("四",num)==0)return 4;
	if(strcmp("五",num)==0)return 5;
	if(strcmp("六",num)==0)return 6;
	if(strcmp("七",num)==0)return 7;
	if(strcmp("八",num)==0)return 8;
	if(strcmp("九",num)==0)return 9;
}

void change2(int a)
{
	if(a==1)
	printf("一");
	else if(a==2)
	printf("二");
	else if(a==3)
	printf("三");
	else if(a==4)
	printf("四");
	else if(a==5)
	printf("五");
	else if(a==6)
	printf("六");
	else if(a==7)
	printf("七"); 
	else if(a==8)
	printf("八");
	else if(a==9)
	printf("九");
	else if(a==10)
	printf("十");
 } 
 int main()
 {
 	char s1[20],s2[20],s3[20],s4[20];
 	int n,sum=0,number;
 	scanf("%s %s %s %s",s1,s2,s3,s4);
 	n=change1(s4);
 	char b1[20],b2[20],b3[20],b4[20];
 	sum=change1(s4);
 	while(1)
 	{
 		scanf("%s %s",b1,b2);
 		
 		if(strcmp("看看",b1)==0)
 		break;
 		scanf("%s",b3);
 		number=change1(b3);
 		if(strcmp("增加",b2)==0)
 		sum+=number;
 		else
 		if(strcmp("减少",b2)==0)
 		sum-=number;
 		
	 }
	 int ten=10;
	 if(sum<=10)
	 {
	    change2(sum);
	 }
	 else
	 {
	 	if(sum<20)
	 	{
		 change2(ten);
	 	change2(sum%10);}
	 	else
	 	{
	 		if(sum%10==0)
	 		{
			 change2(sum/10);
	 		change2(ten);}
	 		else{
			 change2(sum/10);
			 change2(ten);
			 change2(sum%10);}
	 		
		 }
	 	
	 }
	return 0; 
 }
 
