#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* insertNode(void* arg)
{
#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif
                (*fptr[8])(arg); //insertMenu, arg : start not NUll

#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif
        return 0;
}
