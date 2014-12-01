#include <stdio.h>
char *p="hello world";
int main(){
	if(*p){
		putchar(*(p++));
		main();
	}else{
		putchar('\n');
	}
	return 0;
}
