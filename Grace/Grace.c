#include <stdio.h>
/*
	inside
*/
#define CODE FILE *file;file=fopen("Grace_kid.c","w");char *s="#include <stdio.h>%c/*%c	inside%c*/%c#define CODE FILE *file;file=fopen(%cGrace_kid.c%c,%cw%c);char *s=%c%s%c%c#define P fprintf(file,s,10,10,10,10,34,34,34,34,34,s,34,10,10,10,10)%c#define BODY int main(){CODE;P;}%cBODY%c"
#define P fprintf(file,s,10,10,10,10,34,34,34,34,34,s,34,10,10,10,10)
#define BODY int main(){CODE;P;}
BODY
