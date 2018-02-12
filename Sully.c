#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define T "Sully_"
int	count(int n){int i=0;while(n/10){i++;n=n/10;}return(i);}
char *itoa(int n){int i;char *res;i=count(n);if((res=(char*)malloc(sizeof(char)*i+2))==NULL)return(NULL);res[i+1]='\0';while(i>=0){if(n>=10)res[i]=n%10+'0';else res[i]=n+'0';n=n/10;i--;}return(res);}
int main() {
	char *buff;
	int i=1000000;
	FILE *file;
	while(i > 0){
		buff = itoa(i);
		char *name= strcat(strdup(T), buff);
		file=fopen(name,"w");
		fprintf(file, "1");
		fclose(file);
		i--;
	}
}
