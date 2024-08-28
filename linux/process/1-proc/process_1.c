#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

    if(fork()== 0){
        printf ("I am the child %d\n", getpid());
    }else{
        printf ("I am the parent %d\n", getpid());  l;kl;sdgal;kglfs;kg;lkfdsl;kg;lfdskl;gkl;fdsklg;kfdls;kgl;kdsl;gk;lfdskg;lkfdsl;kgl;fdksl;gkfsdl;kgf;ldsk;lgfk
    }
}
