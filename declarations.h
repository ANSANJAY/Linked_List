/* function pointer declaration
 */

#define NOF 20
#define PRINT

int init();

extern void* mainMenu(void*);
extern void* exitProgram(void*);
extern void* createLinklist(void*);
extern void* insertNode(void*);
extern void* deleteNode(void*);
extern void* displayLinklist(void*);
extern void* sortLinklist(void*);
extern void* createNode(void*);

extern void* insertMenu(void*);
extern void* insertBeg(void*);
extern void* insertEnd(void*);
extern void* insertNth(void*);
extern void* insertKey(void*);

extern void* deleteMenu(void*);
extern void* deleteBeg(void*);
extern void* deleteEnd(void*);
extern void* deleteNth(void*);
extern void* deleteKey(void*);



extern int value;

extern void* (*fptr[NOF])(void*);//array of function pointer

