#include <stdio.h>
/*
	inside main
*/
void	call(){return;}
int main(){
/*
	text in main
*/
call();char *s="#include <stdio.h>%c/*%c	inside main%c*/%cvoid	call(){return;}%cint main(){%c/*%c	text in main%c*/%ccall();char *s=%c%s%c;printf(s,10,10,10,10,10,10,10,10,10,34,s,34,10);}%c";printf(s,10,10,10,10,10,10,10,10,10,34,s,34,10);}
