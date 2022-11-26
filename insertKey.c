#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* insertKey(void *arg)
{
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif

	Node* sta; // Start pointer poinitng at first node of the linked list
        Node* current;  // last pointer also pointing to the fisrt node of the linked list
        Node* new;
        int i=0;
        int n=0;
        sta=current=(Node*)arg; // incoming arg (start address) is given to both the pointers
        printf("Enter the key value  after which node has to be inserted\n");
        scanf("%d",&n);
        while(current->info != n)
        {
        current=current->next;
        }

        new=(Node*)(*fptr[7])(0);//creating new node
        new->next=current->next;//dest= source
        current->next=new;

        printf("inserted node value :%d\n",new->info);
        printf("inserted node  address :%p\n",new);


        printf("start pointer : %p\n",sta);
         printf("Nth node  pointer : %p\n",current);


#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif
	return 0;
}
