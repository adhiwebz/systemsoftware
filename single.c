#include<stdio.h>	
#include<string.h>
struct
	{
	char dname[10],fname[10][10];
	int fcnt;
	
	}dir;
void main(){
	char f[30];
	int i,ch;	
	dir.fcnt=0;
	printf("\n Enter the directorty name--");
	scanf("%s",&i);
	while(1)
	{
		printf("\n\n1.Create file\t2.Delete file \t3.Search file\t4.Display file\t5.Exit\tEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n Enter the name of file...");
			scanf("%s",dir.fname[dir.fcnt]);
			dir.fcnt++;
			break;
			case 2:printf("\n Enter the name of file...");
			scanf("%s",f);
			for(i=0;i<dir.fcnt;i++)
			{
				if(strcmp(f,dir.fname[i])==0)
				{
					printf("File %s is deleted",f);
					strcpy(dir.fname[i],dir.fname[dir.fcnt-1]);
				break;
		
				}
			}
			if(i==dir.fcnt)
				printf("File %s not fount",f);
			else
				dir.fcnt--;
			break;
			case 3:printf("\nEnter the name of file..");
				scanf("%s",f);
				for(i=0;i<dir.fcnt;i++)
				{
					if(strcmp(f,dir.fname[i])==0)
					{
						printf("File %s is found",f);
					break;					
					}				
				}
			if(i==dir.fcnt)
			printf("File %s not found",f);
			break;
			case 4:if(dir.fcnt==0)
			{
				printf("\n Directory id empty");
			
			}
			else	
			{
				printf("\n The files are ...");
				for(i=0;i<dir.fcnt;i++)
					printf("\t %s",dir.fname[i]);		
			}
			break;
			default:exit(0);
		}		

	}
		
}
