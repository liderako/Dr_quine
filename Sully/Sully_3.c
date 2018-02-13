#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define T "Sully_"
int	count(int n){int i=0;while(n/10){i++;n=n/10;}return(i);}
char *itoa(int n){int i;char *res;i=count(n);if((res=(char*)malloc(sizeof(char)*i+2))==NULL)return(NULL);res[i+1]=0;while(i>=0){if(n>=10)res[i]=(n%10)+48;else res[i]=(n+48);n=n/10;i--;}return(res);}
int main(){
char *buff;
int i=3;
FILE *file;
while(i>=0){
char *s=strdup("#include <stdio.h>%c#include <string.h>%c#include <stdlib.h>%c#define T %cSully_%c%cint	count(int n){int i=0;while(n/10){i++;n=n/10;}return(i);}%cchar *itoa(int n){int i;char *res;i=count(n);if((res=(char*)malloc(sizeof(char)*i+2))==NULL)return(NULL);res[i+1]=0;while(i>=0){if(n>=10)res[i]=(n%%10)+48;else res[i]=(n+48);n=n/10;i--;}return(res);}%cint main(){%cchar *buff;%cint i=%d;%cFILE *file;%cwhile(i>=0){%cchar *s=strdup(%c%s%c);%cbuff=itoa(i);%cchar *name=strcat(strdup(T),strcat(buff,strdup(%c.c%c)));%cfile=fopen(name,%cw%c);%cfprintf(file,s,10,10,10,34,34,10,10,10,10,10,i,10,10,10,34,s,34,10,10,34,34,10,34,34,10,10);fclose(file);i--;}}%c");
buff=itoa(i);
char *name=strcat(strdup(T),strcat(buff,strdup(".c")));
file=fopen(name,"w");
fprintf(file,s,10,10,10,34,34,10,10,10,10,10,i,10,10,10,34,s,34,10,10,34,34,10,34,34,10,10);fclose(file);i--;}}
