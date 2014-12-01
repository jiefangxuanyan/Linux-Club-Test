#include <stdio.h>
#include <unistd.h>
void show(const char *name){
	FILE *fin=fopen(name,"r");
	int ch;
	while((ch=fgetc(fin))!=EOF){
		putchar(ch);
	}
}
char *names[]={"date.c","mem.c"};
int main(){
	for(int i=0;i<2;i++){
		int pid=fork();
		if(pid){
			printf("%d\n",pid);
		}else{
			show(names[i]);
			break;
		}
	}
	return 0;
}
