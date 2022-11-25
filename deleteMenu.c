#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* deleteMenu(void *arg)
{
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif

	int i;
        Node *start; // start 
        start = (Node*)arg;

	if(!start)
	{
	printf("No linked list found for deletion\n",__func__);
	goto RET;
	}
	
	if(!start->next)
	{	
        printf("Empty linked list\n",__func__);
        goto RET;
        }

        printf("%s :____DELETE MENU ____\n",__func__);

       if(start)
       {
        printf("%s :1: DELETE AT THE BEGINNING\n",__func__);
        printf("%s :2: DELETE AT THE END\n",__func__);
        printf("%s :3: DELETE AFTER N NODES\n",__func__);
        printf("%s :4: DELETE AFTER KEY VALUE\n",__func__);
    
        printf("%s :0: EXIT PROGRAM ____\n",__func__);
        printf("%s :Please enter your choice: \n",__func__);
        scanf("%d",&i);
       }
             if ((i>=1) && (i<=4))
                        (*fptr[i+13 ])(arg); //arg : START


RET:

#ifdef PRINT
        printf("%s : End  \n",__func__);
#endif
	return (void*)start;
}
