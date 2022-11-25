#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* insertMenu(void* arg)
{
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif

	int i;
        Node *start; // start 
        
	if(!arg)
	{
	printf("No linked list found for insertion\n",__func__);
	goto RET;
	}
	        start = (Node*)arg;

        printf("%s :____INSERT MENU ____\n",__func__);

       if(start)
       {
        printf("%s :1: INSERT AT THE BEGINNING\n",__func__);
        printf("%s :2: INSERT AT THE END\n",__func__);
        printf("%s :3: INSERT AFTER N NODES\n",__func__);
        printf("%s :4: INSERT AFTER KEY VALUE\n",__func__);
    
        printf("%s :0: EXIT PROGRAM ____\n",__func__);
        printf("%s :Please enter your choice: \n",__func__);
        scanf("%d",&i);
       }
             if ((i>=1) && (i<=4))
                        (*fptr[i+8])(arg); //arg : START


RET:

#ifdef PRINT
        printf("%s : End  \n",__func__);
#endif
	return (void*)start;
}
