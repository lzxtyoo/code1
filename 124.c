#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct list                //����
  {
	  int side;            //��֧����
	  int year;            //���
	  int month;           //�·�
	  int day;             //����
	  float cost;          //���
  }a[1024],temp;
int main()
{ 
	FILE *fp;	                 
  float a4,total;
  int i,x,y,m,n,a0=0,a1,a2,a3,swap;
  /*��ȡ*/
  fp=fopen("file.txt","rb+");
  if(fp==NULL)
  {
  	fclose(fp);
  	fp=fopen("file.txt","wb+");
  	a0=1;
  }
  else
  {
  	for(i=0;i<1024;i++)
    {
    	fread(&a[i],sizeof(struct list),1,fp);
    	if(a[i].side!=1 && a[i].side!=2)break;
    }
    fclose(fp);
  }
  do
  {
    printf("\n                     ��ѹ���ϵͳ\n\n");
    printf("����������������������������������������������������������\n\n");
    printf("    1����������");
	printf("  2������֧��");
	printf("  3�������ϸ");
	printf("  4���˳�ϵͳ\n\n");
    printf("����������������������������������������������������������\n\n");

    do
    {
		printf("��ѡ��1-4����");
		scanf("%d",&x);
		if(x<1||x>4)
		{
        printf("�Ƿ����룡��\n");
		}
		if(x==1)
		{
		printf("1����������\n");
		}
		if(x==2)
		{
		printf("2������֧��\n");
		}
		if(x==3)
		{
		printf("3�������ϸ\n");
		}
		if(x==4)
		{
		printf("4���˳�ϵͳ\n");
		}
    }while(x<1||x>4);
    if(x==1||x==2)
    {
		n=0;
    do
	{
		if(a[n].side==1)
		{
			n++;
		}
		else if(a[n].side==2)
		{
			n++;
		}
		else
		{
			break;
		}
	}while(n<1024);
	do
	{
    do
	{
		a1=0;
		a2=0;
		a3=0;
    printf("������ʱ��(yyyy/mm/dd):");
    scanf("%d/%d/%d",&a1,&a2,&a3);      //��������
	 if(a1>=1970)//���ڼ��
	 {
		if(a2==1)
		{
			if(a3>=1 && a3<=31)
			{
				break;
			}
		}
		if(a2==3)
		{
			if(a3>=1 && a3<=31)
			{
				break;
			}
		}
		if(a2==5)
		{
			if(a3>=1 && a3<=31)
			{
				break;
			}
		}
		if(a2==7)
		{
			if(a3>=1 && a3<=31)
			{
				break;
			}
		}
		if(a2==8)
		{
			if(a3>=1 && a3<=31)
			{
				break;
			}
		}
		if(a2==10)
		{
			if(a3>=1 && a3<=31)
			{
				break;
			}
		}
		if(a2==12)
		{
			if(a3>=1 && a3<=31)
			{
				break;
			}
		}
		if(a2==4)
		{
			if(a3>=1 && a3<=30)
			{
				break;
			}
		}
		if(a2==6)
		{
		if(a3>=1 && a3<=30)
			{
				break;
			}
		}
		if(a2==9)
		{
			if(a3>=1 && a3<=30)
			{
				break;
			}
		}
		if(a2==11)
		{
			if(a3>=1 && a3<=30)
			{
				break;
			}
		}
		if(a1%4==0)
		{
			if(a2==2)
		{
			if(a3>=1 && a3<=29)
			{
				break;
			}
		}
		}
		if(a1%4!=0)
		{
			if(a2==2)
		{
			if(a3>=1 && a3<=28)
			{
				break;
			}
		}
		}
	 }
	 printf("�Ƿ�ʱ�䣡��\n");//��������
	}while(x!=0);
    printf("��������:");
    scanf("%f",&a4);
    printf("No.%d",n+1);
	if(x==1)
		{
		printf("����:");
		}
		if(x==2)
		{
		printf("֧��:");
		}
   
		printf("%5d/%2d/%2d:%10.2f\n",a1,a2,a3,a4);
	do
	{
	 printf("ȷ������?\n(1)����(2)��������(3)��������\n");
	 scanf("%d",&y);
	 if(y==1)
	 {
		 a[n].side=x;
		 a[n].year=a1;
		 a[n].month=a2;
		 a[n].day=a3;
		 a[n].cost=a4;
		 break;
	 }
	 else if(y==2)
	 { 
		break;
	 } 
	 else if(y==3)
	 {
	 	break;
	 }
	 else
	 {
		 printf("�Ƿ����룡��\n");
	 }
	}while(x!=0);
	if(y==1)
	{
	break;
	}
	if(y==2)
	{
	continue;
	}
	if(y==3)
	{
	break;
	}
	}while(x!=0);
    }
    //������Ч�����Ŀ
    n=0;
		do
	{
		if(a[n].side==1)
		{
			n++;
		}
		else if(a[n].side==2)
		{
			n++;
		}
		else
		{
			break;
		}
	}while(n<1024);
	m=n;
    //����ģ��
	for(i=0;i<m;i++)//����������
	{
		for(n=0;n<m-1;n++)
		{
			if(a[n].day>a[n+1].day)
			{
				temp.side=a[n].side;
				temp.year=a[n].year;
				temp.month=a[n].month;
				temp.day=a[n].day;
				temp.cost=a[n].cost;
				a[n].side=a[n+1].side;
				a[n].year=a[n+1].year;
				a[n].month=a[n+1].month;
				a[n].day=a[n+1].day;
				a[n].cost=a[n+1].cost;
				a[n+1].side=temp.side;
				a[n+1].year=temp.year;
				a[n+1].month=temp.month;
				a[n+1].day=temp.day;
				a[n+1].cost=temp.cost;
				swap++;
			}
		}
		if(swap==0)
		{
			break;
		}
		else
		{
			swap=0;
		}
		
	}
	for(i=0;i<m;i++)//����������
	{
		for(n=0;n<m-1;n++)
		{
			if(a[n].month>a[n+1].month)
			{
				temp.side=a[n].side;
				temp.year=a[n].year;
				temp.month=a[n].month;
				temp.day=a[n].day;
				temp.cost=a[n].cost;
				a[n].side=a[n+1].side;
				a[n].year=a[n+1].year;
				a[n].month=a[n+1].month;
				a[n].day=a[n+1].day;
				a[n].cost=a[n+1].cost;
				a[n+1].side=temp.side;
				a[n+1].year=temp.year;
				a[n+1].month=temp.month;
				a[n+1].day=temp.day;
				a[n+1].cost=temp.cost;
				swap++;
			}
		}
		if(swap==0)
		{
			break;
		}
		else
		{
			swap=0;
		}
		
	}
	for(i=0;i<m;i++)//����������
	{
		for(n=0;n<m-1;n++)
		{
			if(a[n].year>a[n+1].year)
			{
				temp.side=a[n].side;
				temp.year=a[n].year;
				temp.month=a[n].month;
				temp.day=a[n].day;
				temp.cost=a[n].cost;
				a[n].side=a[n+1].side;
				a[n].year=a[n+1].year;
				a[n].month=a[n+1].month;
				a[n].day=a[n+1].day;
				a[n].cost=a[n+1].cost;
				a[n+1].side=temp.side;
				a[n+1].year=temp.year;
				a[n+1].month=temp.month;
				a[n+1].day=temp.day;
				a[n+1].cost=temp.cost;
				swap++;
			}
		}
		if(swap==0)
		{
			break;
		}
		else
		{
			swap=0;
		}
		
	}//�������
	if(x==3)
	{
		//������Ч�����Ŀ
		do
	{
		if(a[n].side==1)
		{
			n++;
		}
		else if(a[n].side==2)
		{
			n++;
		}
		else
		{
			break;
		}
	}while(n<1024);//��Ч��������
	m=n;
	total=0;
	for(n=0;n<m;n++)//��ӡ����
	{
		printf("  No.%4d",n+1);
		if(a[n].side==1)
		{
			printf("  ����:");
			total=total+a[n].cost;
		}
		if(a[n].side==2)
		{
			printf("  ֧��:");
			total=total-a[n].cost;
		}
		printf("  %4d/%2d/%2d %10.2f\n",a[n].year,a[n].month,a[n].day,a[n].cost);
	}
	printf("����֧:%10.2f\n\n",total);
	for(;;)
	{
	printf("�Ƿ���Ҫɾ������Ŀ?\n(1)��(2)��\n");
	for(;;)
	{
		scanf("%d",&y);
		if(y!=1 && y!=2)
		{
			printf("�Ƿ�����!!\n");
			continue;
		}
		if(y==1)
		{
			printf("������Ҫɾ����Ŀ�ı���:");
			scanf("%d",&n);
			n=n-1;
			printf("\n  %4d/%2d/%2d %10.2f\n",a[n].year,a[n].month,a[n].day,a[n].cost);
			printf("�Ƿ�ɾ������Ŀ?\n(1)��(2)��\n");
			y=0;
			for(;;)
	{
		scanf("%d",&y);
		if(y!=1 && y!=2)
		{
			printf("�Ƿ�����!!\n");
			continue;
		}
		if(y==2)break;
		if(y==1)//ִ��ɾ��
		{
			
		 a[n].side=0;
		 a[n].year=0;
		 a[n].month=0;
		 a[n].day=0;
		 a[n].cost=0;
		 //����ģ��2
	for(n=0;n<m;n++)//�Ƴ���ɾ�����ռλ
	{
			if(a[n].side==0)
			{
				a[n].side=a[n+1].side;
				a[n].year=a[n+1].year;
				a[n].month=a[n+1].month;
				a[n].day=a[n+1].day;
				a[n].cost=a[n+1].cost;
				a[n+1].side=0;
				a[n+1].year=0;
				a[n+1].month=0;
				a[n+1].day=0;
				a[n+1].cost=0;
			}
		
	}//�������
		 break;
		}
	}
		if(y==2)break;
	}
	break;
	}
	break;
	}
	}
	 if(x==4)
	 {
		 break;
	 }
    }while(x!=0);
    /*����*/
    if(a0=1)fp=fopen("file.txt","wb");
    for(i=0;i<1024;i++)
    {
    	if(a[i].side!=1 && a[i].side!=2)break;
    	fwrite(&a[i],sizeof(struct list),1,fp);
    }
    fclose(fp);
   return 0;
  }
