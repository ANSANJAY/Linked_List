/*create new node
 *create new node returns address of newly created node in void *
 *type cats to node * , caputre the address in node pointer new
 *we insert node bwteeen 0 and 1 
 *because Node 0 never has data , it's  just like having  contents to the book
 */

#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* insertBeg(void *arg)
{
	Node *new; // pointer to capture address of newly created node
	Node *sta;	  //
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
	sta = (Node*)arg;
	new = (Node*)(*fptr[7])(0);// createNode() - does not need any argumnet 
	new->next = sta->next;
	sta->next = new;
	printf(" Newly created node value : %d\n",new->info);

				
#ifdef PRINT
        printf("%s : End \n",__func__);
#endif
	return (void*)arg;
}
