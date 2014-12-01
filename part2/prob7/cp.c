#include <stdio.h>
int main(int argc,char **argv){
	if(argc<3){
		return 1;
	}
	FILE *fin=fopen(argv[1],"rb"),*fout=fopen(argv[2],"wb");
	if(!(fin||fout)){
		return -1;
	}
	int ch;
	while((ch=fgetc(fin))!=EOF){
		fputc(ch,fout);
	}
	return 0;
}
