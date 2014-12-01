#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main(){
	if(fork()){
		exit(0);
	}
	setsid();
	FILE *fout=fopen("deamon_log.txt","w");
	for(int i=0;i<10;i++){
		time_t t=time(NULL);
		fputs(ctime(&t),fout);
		fflush(fout);
		sleep(15);
	}
	fclose(fout);
	return 0;
}
