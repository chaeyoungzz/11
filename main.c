#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	genlist();
	
	addtail(10);
	addtail(20);
	addtail(30);
	addtail(40);
	addtail(50);
	
	print_list(3);	
	
	return 0;
}
