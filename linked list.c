#include <stdlib.h>
#include <stdio.h>


typedef struct linknd{
	int data;
	void *next;
}linknd_t;

static linknd_t *list;

linknd_t* create_node(int value){
	linknd_t *ndptr;
	
	ndptr = (linknd_t*)malloc(sizeof(linknd_t));
	if(ndptr == NULL)
	{
		printf("ERROR \n");
		return NULL;
	}
	
	ndptr->data = value;
	ndptr->next = NULL;
	
	
	
	return ndptr;
}

void addtail(int value){
	linknd_t *ndptr, *newptr;
	
	
	if ( list == NULL)
	{
		return;
	}
	else
	{
		ndptr = list;
		while(ndptr->next != NULL)
		{
			ndptr = ndptr->next;
		}
		newptr = create_node(value);
		ndptr->next = newptr;
	}
}

void genlist(void){
	list = create_node(0);
	return;
}
void print_list(int n){
	linknd_t *ndptr;
	int i=0;
	
	ndptr = list->next;
	
	while(ndptr != NULL){
		i++;
		if( i==n){
			printf("n = %i, value = %i\n",i , ndptr->data);
			break;
		}
		
	}
	
}





