#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	char s[20];
	int fd;
	mkfifo("newfifo11",644);
	printf("before open()..\n");
	fd = open("newfifo11",O_RDONLY);
	printf("after open()...\n");
	read(fd,s,sizeof(s));
	printf("data : %s\n",s);
	return 0;
}
