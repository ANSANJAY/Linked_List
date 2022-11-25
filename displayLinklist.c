#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* displayLinklist(void *arg)
{
	Node *current; // capture start pointer
	int i;
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
	current = (Node*)arg;
	if(!current)
	{
	printf("%s: ERROR : Linkedlist not found",__func__);
	return arg;
	}

	else if(!current->next)
	{
	 printf("%s: ERROR : Linkedlist is empty",__func__);
        return arg;
	}
	else
	{
		i=1;
		while(current->next)
		{
		
		current = current->next;
		printf("%s: Node no : %3d->%4d\n",__func__,i++,current->info);
		}
	}
#ifdef PRINT
        printf("%s : End \n",__func__);
#endif
	return 0;
}
