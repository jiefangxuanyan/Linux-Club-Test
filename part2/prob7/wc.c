#include <stdio.h>
#include <ctype.h>
int main(){
	int ln=0,ch=0,wd=0,prevwd=0,prevln=0,c;
	while((c=getchar())!=EOF){
		if(c=='\n'){
			ln++;
			prevln=0;
		}else{
			prevln=1;
		}
		ch++;
		if(isspace(c)){
			wd+=prevwd;
			prevwd=0;
		}else{
			prevwd=1;
		}
	}
	if(prevln){
		ln++;
	}
	if(prevwd){
		wd++;
	}
	printf("\t%d\t%d\t%d\n",ln,ch,wd);
	return 0;
}
