#include <stdio.h>
/*
	inside
*/
#define CODE char *s="#include <stdio.h>%c/*%c	inside%c*/%c#define CODE char *s=%c%s%c%c#define P printf(s,10,10,10,10,34,s,34,10,10,10,10,34)%c#define BODY int main(){CODE;P;}%cBODY%c"
#define P printf(s,10,10,10,10,34,s,34,10,10,10,10,34)
#define BODY int main(){CODE;P;}
BODY
