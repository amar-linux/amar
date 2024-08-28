#ifndef POPEN2_H_
#define POPEN2_H_


#include<stdio.h>

typedef struct{
    FILE *in, *out, *err;
}stdpipes;

stdpipes popen3 (const char* command);


#endif
