#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* deleteNth(void* arg)
{
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
	Node* sta; // Start pointer poinitng at first node of the linked list
        Node* current;  // last pointer also pointing to the fisrt node of the linked list
        Node* previous;
        int i=0;
        int n=0;
        sta=previous=current=(Node*)arg; // incoming arg (start address) is given to both the pointers
        printf("Enter the node after which node has to be inserted\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
	previous=current;
        current=current->next;
        }

        previous->next=current->next;//dest= source
        free(current);

       


        printf("start pointer : %p\n",sta);
         printf("Nth node  pointer : %p\n",current);


#ifdef PRINT
        printf("%s : End\n",__func__);
#endif
	return 0;
}
