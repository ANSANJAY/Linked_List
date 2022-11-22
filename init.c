#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

//declaration in global space

void* mainMenu(void*);
void* exitProgram(void*);
void* createLinklist(void*);
void* insertNode(void*);
void* deleteNode(void*);
void* displayLinklist(void*);
void* sortLinklist(void*);
void* createNode(void*);
void* insertMenu(void*);
void* insertBeg(void*);
void* insertEnd(void*);
void* insertNth(void*);
void* insertKey(void*);


int value;

void* (*fptr[NOF])(void*);

int init()
{
#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif

                //define your fptr

fptr[0]=mainMenu;
fptr[1]=exitProgram;
fptr[2]=createLinklist;
fptr[3]=insertNode;
fptr[4]=deleteNode;
fptr[5]=displayLinklist;
fptr[6]=sortLinklist;
fptr[7]=createNode;
fptr[8]=insertMenu;
fptr[9]=insertBeg;
fptr[10]=insertEnd;
fptr[11]=insertNth;
fptr[12]=insertKey;





value =11;

#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif
		return 0;
}
