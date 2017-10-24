#include<stdio.h>

void main(){
	int bt[20],wt[20],i,n,p[20],tat[20],k,temp;
	float wtavg,tatavg;
	
	printf("Enter the numberr of process: ");
		scanf("%d",&n);
	for(i=0;i<n;i++)	
	{
		p[i] =i;
		printf("Enter Burst time for process %d ..",i);
			scanf("%d",&bt[i]);
	}
	
	for(i=1;i<n;i++)
	{
		if(bt[i] > bt[k])
		{
			temp=bt[i];
			bt[i]=bt[k];
			bt[k]=temp;
			temp=p[i];
			p[i]=p[k];
			p[k]=temp;

		}
		wt[0]= wtavg =0;
		tat[0]=tatavg=bt[0];
		for (i=1;i<n;i++)
			{
			
			wt[i]  = wt[i-1]+bt[i-1];
			tat[i] = tat[i-1] + bt[i];
			wtavg = wtavg+wt[i];
			tatavg  = tatavg + tat[i];				
			}
		}
	printf("\t Process \t Burst time \t Waiting time \t Turnarounsd time \n");
	for(i=0;i<n;i++)
	{	
		printf("\n \t %d \t \t %d \t\t %d \t\t %d",i,bt[i],wt[i],tat[i]);
		printf(" \n Average waiting time --%f ",wtavg/n );
		printf(" \n Average turn around time-- %f ",tatavg/n );
			
	}
}

