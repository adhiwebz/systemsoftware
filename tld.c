#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct
{
	char dname[10],fname[10][10];
	int fcnt;
}dir[10];
void main()
{
	int i,ch,dcnt,k;
	char f[30],d[30];
	dcnt=0;
	while(1)
	{
		printf("\n \n 1.Create Directory\n2.Create File\n3.Delete file\n4.Search file\n5.Display file\n6.Exit\n");
		printf("Enter your choice:(1/2/3/4/5)");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\nEnter the name of the directory:\n");
				scanf("%s",dir[dcnt].dname);
				dir[dcnt].fcnt==0;
				dcnt++;
				printf("Directory Created");
				break;
			case 2: printf("\nEnter the name of the directory:\n");
				scanf("%s",d);
				for(i=0;i<dcnt;i++)
				{
					if(strcmp(d,dir[i].dname)==0)
					{
						printf("Enter the name of the file......\n");
						scanf("%s",dir[i].fname[dir[i].fcnt]);
						dir[i].fcnt++;
						printf("File is created\n");
						break;
					}
				}
				if(i==dcnt)
					printf("Directory %s is not found",d);
				break;
			case 3: printf("\nEnter the name of the directory\n");
				scanf("%s",d);
				for(i=0;i<dcnt;i++)
				{
					if(strcmp(d,dir[i].dname)==0)
					{
						printf("Enter the name of the file..\n");
						scanf("%s",f);
						for(k=0;k<dir[i].fcnt;k++)
						{
							if(strcmp(f,dir[i].fname[k])==0)
							{
								printf("File %s is deleted",f);
								dir[i].fcnt--;
								strcpy(dir[i].fname[k],dir[i].fname[dir[i].fcnt]);
								break;
							}
						}
						printf("File %s  found",f);
						break;
					}
				}
				printf("Directory %s not found",d);
				break;
			case 4: printf("\nEnter the name of the directory...\n");
				scanf("%s",d);
				for(i=0;i<dcnt;i++)
				{
					if(strcmp(d,dir[i].dname)==0)
					{
						printf("Enter the name of the file....");
						scanf("%s",f);
						for(k=0;k<dir[i].fcnt;k++)
						{
							if(strcmp(f,dir[i].fname[k])==0)
							{
								printf("File %s is found ",f);
								break;
							}
						}
						printf("file %s is not found",f);
						break;
					}
				}
				printf("\nDirectory %s not found",d);
				break;
			case 5: if(dcnt==0)
				printf("\n No such Directory");
				else
				{
					printf("\nDirectory\tfiles");
					for(i=0;i<dcnt;i++)
					{
						printf("\n%s\t\t",dir[i].dname);
						for(k=0;k<dir[i].fcnt;k++)
							printf("\t%s",dir[i].fname[k]);
					}
				}
				break;
		default	: exit(0);
		}
		}
	}
