/*call main Menu in infinite loop
 * calls init()
 *
 */

#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

int main()
{
#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif
        init();
        Node *start;//pointer to structure Node as start
        start = NULL;
while(1)
        start=(*fptr[0])((void*)start); // call mainMenu with start NULL as arg

#ifdef PRINT
        printf("%s :	End  \n",__func__);
#endif
}		
