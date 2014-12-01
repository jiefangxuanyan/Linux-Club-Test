#include <stdio.h>
#include <time.h>
int main(){
	time_t t=time(NULL);
	puts(ctime(&t));
	return 0;
}
