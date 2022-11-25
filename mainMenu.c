/*
 */

#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* mainMenu(void* arg)//mainMenu called with start as argument
{
        int i;
        Node *start; //  pointer to structure start 
#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif
        start = (Node*)arg; // argument received is start , data type as void * , typecasting it to Node*
        printf("%s :____MAIN MENU ____\n",__func__);

        if(!start)//if start is NUll create linked list
        printf("%s :1: CREATE LINKED LIST\n",__func__);
        else
        {
        printf("%s :2: INSERT NODE\n",__func__);
        printf("%s :3: DELETE NODE\n",__func__);
        printf("%s :4: DISPLAY LINK LIST\n",__func__);
        printf("%s :5: SORT LINK LIST\n",__func__);
        }
        printf("%s :0: EXIT PROGRAM ____\n",__func__);
        printf("%s :Please enter your choice: \n",__func__);
        scanf("%d",&i);

                if(i==0)
                        (*fptr[1])((void*)"success");//exit program
                else if(i==1)
                start=(*fptr[2])(arg); //create link list : createLinklist
                else if (i>=2 && i<=5)
                        (*fptr[i+1])(arg); // arg : start

#ifdef PRINT
        printf("%s :	End \n",__func__);
#endif
        return (void* )start;
}
