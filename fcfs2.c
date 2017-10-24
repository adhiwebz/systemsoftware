#include<stdio.h>
void main(){
	int t[20],n,i,j,tohm[20],tot=0;
	float avhm;
	printf("Enter name of track");
	scanf("%d",&n);
	printf("Enter track to be transversed");

	for(i=1;i<n+1;i++)
	scanf("%d",&t[i]);
			for(i=1;i<n+1;i++)
		{
			tohm[i]=t[i]-t[i-1];
			if (tohm[i]<0)
				tohm[i]=tohm[i]*(-1);
		}
	for(i=1;i<n+1;i++)
	tot=tohm[i];
	avhm=(float)tot/n;
	printf("Track traversed\tDifference between tracks\n");
	for(i=1;i<n+1;i++)
	printf("%d\t\t\t%d\n",t[i],tohm[i]);
	printf("\n Avg header movements 3%f",avhm);
}
