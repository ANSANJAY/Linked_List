#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* createLinklist(void *arg)
{
	Node *sta; // start pointer for linked list
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
	sta=(Node*)arg; //incoming argument typecasted as  node * 
	sta=(Node*)(*fptr[7])(0);

#ifdef PRINT
        printf("%s : End  \n",__func__);
#endif
	return (void*)sta;
}
