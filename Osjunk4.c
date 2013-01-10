#include<stdio.h>
#include<time.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main(){

	int id;
	 
	struct stat *buff;
	stat("OsJunk3.c",buff);
	printf("%d\n", buff->st_atime);



}



