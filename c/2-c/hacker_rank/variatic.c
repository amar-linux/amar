#include<stdarg.h>




int  sum (int count,...) {
    va_list  intptr;
    va_start(intptr, count);
    for (int i=0; i< count;i++){
        sum += (va_arg(intptr, int));
    }
    va_end(intptr);

}
