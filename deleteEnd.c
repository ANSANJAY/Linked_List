/*take a new pointer
 *traverse the linked list till the new pointer's  next == NUll 
 *it means we reached end of linked list
 *also the node previous to last node .
 it's next should point to Null

 */

#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* deleteEnd(void* arg)
{
	Node *lst, *sla;
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
	lst = sla = (Node*)arg;
	if(!lst->next)
	{
	printf("%s: Linklist is Empty\n",__func__);
	goto RET;
	}
	while(lst->next)
	{
	sla = lst;
	lst = lst->next;
	}

	free(lst);
	sla->next = NULL;
RET :
#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif
	return 0;
}
