#include<stdio.h>
int n,pg[30],fr[10];
void fifo();
void optimal();
void lru();
void main()
{
	int i,ch;
	printf("\nEnter total number of pages:");
	scanf("%d",&n);
	printf("\nEnter sequence:");
	for(i=0;i<n;i++)			//accepting sequence
		scanf("%d",&pg[i]);
	do
	{
		printf("\n\tMENU\n");
		printf("\n1)FIFO");
		printf("\n2)OPTIMAL");
		printf("\n3)LRU");
		printf("\n4)Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: fifo();
				break;

			case 2: optimal();
				break;

			case 3: lru();
				break;

		}
	}while(ch!=4);
	getchar();
}

void fifo()
{
	int i,f,r,s,count,flag,num,psize;
	f=0;
	r=0;
	s=0;
	flag=0;
	count=0;
	printf("\nEnter size of page frame:");
	scanf("%d",&psize);
	for(i=0;i<psize;i++)	
	{
