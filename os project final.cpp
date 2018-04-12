#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	time_t now;
    time(&now);
    printf("time is\n %s",ctime(&now));
    int noOfProcessS,noOfProcessT, root, timeQuantum;
    int studentArray[100],teacherArray[200];
    printf("\nAre you HR?Enter 1 if yes");
    scanf("%d", &root);
    if(root=1)
    {
        printf("\nWelcome Sir!");
        printf("\nYour time is from 10 to 12 AM");
        printf("\n-------------------------------------------");
        printf("\nEnter no of Teacher queries:");
        scanf("%d",&noOfProcessT);      
		printf("\nEnter no of Student queries:");
        scanf("%d",&noOfProcessS);
        printf("\nEnter the time Quantum:");
        scanf("%d", &timeQuantum);
		int q;

    	for(int i=0;i<noOfProcessT;i++)
    	{
        	teacherArray[i]=i+1;
    	}
    	for(int i=0; i<noOfProcessS; i++)
    	{
        	studentArray[i] = i+1;
    	}
		int n;
		int wait=0;
    	for(int i=120, j=0; i>0&&j<noOfProcessT; i=i-timeQuantum, j++)
		{
        	printf("\nThe doubt query handled at %d", i);
        	printf("\nthe teacher is:%d",teacherArray[j]);
        	n=i;
        	wait=wait+120-i;
		}
    	for(int i=n-timeQuantum, j=0; i>0&&j<noOfProcessS; i=i-timeQuantum, j++)
    	{
        	printf("\nThe doubt query handled at %d", i);
        	printf("\nthe student is:%d\n",studentArray[j]);
        	wait=wait+120-i;
    	}
    	int noOfProcess=noOfProcessS+noOfProcessT;
    	int timespent=noOfProcess*timeQuantum;
    	printf("\ntotal time spent on queries is:%d",timespent);
    	float avgwait=wait/noOfProcess;
    	printf("\n average waiting time is:%f",avgwait);
    }
    else
    {
        printf("\nSorry the server is down");
        printf("\nTry again later");
    }
}
