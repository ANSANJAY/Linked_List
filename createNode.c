#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"



void* createNode(void *arg)
{
	Node *new;  //create local pointer to the node
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
	new = (Node*)malloc(sizeof(Node));
	if(!new)
	{
		perror("malloc");
		(*fptr[1])((void*)"failure");
	}

	new->next=NULL;
	new->info=value++;

#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif
	return (void*)new;
}