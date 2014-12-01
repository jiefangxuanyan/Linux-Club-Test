#include <stdio.h>
int main(){
	FILE *fin=fopen("/proc/meminfo","r");
	int ch;
	while((ch=fgetc(fin))!=EOF){
		putchar(ch);
	}
	return 0;
}
