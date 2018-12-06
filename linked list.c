#include <stdlib.h>
#include <stdio.h>

typedef struct linknd{
	int data;
	void *next;
}linknd_t;

static linknd_t *list;

linknd_t* create_node(int value){
	linknd_t* ndptr;
	
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

