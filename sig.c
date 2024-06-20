#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <error.h>
#include <sys/types.h>
#include <signal.h>

int main(int argc,char *argv[]){
	
	int process;

	printf("argc=%d,",argc);
	printf("argv[0]=%s,",argv[0]);
	printf("argv[1]=%s,",argv[1]);
	
	process = atoi(argv[1]);
	
	printf("process=%d\n,",process);
	
	kill(process,SIGUSR1);
	
}
