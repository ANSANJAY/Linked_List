#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* insertEnd(void* arg) // arg is START
{
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif	
	Node* sta; // Start pointer poinitng at first node of the linked list
	Node* lst; // last pointer also pointing to the fisrt node of the linked list
	lst=sta=(Node*)arg; // incoming arg (start address) is given to both the pointers
	
	while(lst->next)// while the node is pointing to other node , next is not NULL
	lst = lst->next ;	

	lst->next=(Node*)(*fptr[7])(0);//creating new node , address of newly created node is stored is last -> next  
	printf("%d\n",lst->info);
#ifdef PRINT
        printf("%s : End \n",__func__);
#endif
	return 0;
}
