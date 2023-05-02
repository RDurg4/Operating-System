#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
void child()
{
	printf("Hello \n");
}
void parent()
{
	printf("Main task \n");
}
int main()
{
	pid_t pid=fork();
	if(pid==0)
	{
		child();
		exit(EXIT_SUCCESS);
	}
	else if(pid>0)
	{
		parent();
	}
	else
	{
		printf("Unable to create \n");
	}
	return EXIT_SUCCESS;
}

