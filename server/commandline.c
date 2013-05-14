#include <stdio.h>
#include <malloc.h>

void help(void);

int main(int argc, char* argv[]){

int MODE;
int key;

#define LISTEN 1
#define SEND 2

if ( argc < 2 || !strcmp(argv[1], "-h") )        
        help();

else if( !strcmp(argv[1],"listen"))
{
  if(argc < 3)
  	help();
	else{
		MODE = LISTEN;
		key = atoi(argv[2]);
	}
}
else if(!strcmp(argv[1],"send"))
{
	if(argc < 4)
		help();
	else{
		MODE = SEND;
		key = atoi(argv[2]);
		char*filename = malloc(sizeof(argv[3]));
		filename = argv[3];
	}
}
else
help();




return 0;
}






void help(void)
{
printf( "usage: /client listen <key>\n       /client send <key> <filename>\n       /client -h\n");
}
