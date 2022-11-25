#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* deleteBeg(void *arg)
{
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
	Node *sta;
	Node *fst;
	fst = sta = (Node*)arg;
	if(!sta->next)
	{
	printf("%s : Linked list is empty\n",__func__);
	goto RET;
	}
	fst = sta->next;
	sta->next = fst->next;

	free(fst);
#ifdef PRINT
        printf("%s : End \n",__func__);
#endif
RET :
	return 0;
}
