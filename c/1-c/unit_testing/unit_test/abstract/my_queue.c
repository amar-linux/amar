#include<stdio.h>
#include"my_queue.h"

int main(){

    queue *q1 = q_create(5);

    q_enqueue(q1, 5);
    q_enqueue(q1, 6);
    q_enqueue(q1, 7);
    q_enqueue(q1, 8);
    q_enqueue(q1, 9);
    q_enqueue(q1, 10);

    int t;
    while ((t = q_deque(q1))!= QUEUE_EMPTY){
        printf ("t = %d\n",t);
    }
}
