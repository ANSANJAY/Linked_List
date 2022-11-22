#define NOF 15
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




extern int value;

extern void* (*fptr[NOF])(void*);

