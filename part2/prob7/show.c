#include <stdio.h>
int main(int argc,char **argv){
	if(argc<2){
		return 1;
	}
	FILE *fin=fopen(argv[1],"r"),*fout=argc>=3?fopen(argv[2],"w"):stdout;
	int ch;
	while((ch=fgetc(fin))!=EOF){
		fputc(ch,fout);
	}
	return 0;
}
