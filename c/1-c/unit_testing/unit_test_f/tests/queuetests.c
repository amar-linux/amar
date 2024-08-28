#include<criterion/criterion.h>

#include "../src/myqueue.h"

Test(queuetests, create){
    queue* q= q_create(5);
    cr_expect(q != NULL, "q_create should not return NULL");
}
