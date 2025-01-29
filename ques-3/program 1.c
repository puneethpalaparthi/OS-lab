#include<stdio.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc,char*argv[])
{
	FILE *fp;char ch;int sc=0;
	fp=fopen(argv[1],"r");
	if(fp==NULL)
		printf("unable to open a file %s",argv[1]);
	else
	{
		while ((ch = fgetc(fp)) != EOF) 
		{
			if(ch == ' ')
				sc++;
		}
		printf("no spaces %d\n",sc);
	
	}
	return 0;
}
