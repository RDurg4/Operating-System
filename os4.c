#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
void main()
{
	struct stat sfile;
	stat("os1.c",&sfile);
	printf("st-size=%ld \n",sfile.st_size);
}

