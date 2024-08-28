#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"myqueue.h"


typedef struct myq{
    int *value;
    int head, tail,num_entries, size;
}queue;


queue* q_create(int max_size){
    queue *q = (queue*)malloc(sizeof(queue));
    q->size = max_size;
    q->value = (int*)malloc(sizeof(int) * q->size);
    q->num_entries=0;
    q->head =0;
    q->tail=0;
    return q;
}

void q_destroy(queue *q){
    free(q->value);
    free(q);

}

bool q_empty(queue *q){
    return (q->num_entries ==0);
}

bool q_full (queue *q){
    return (q->num_entries == q->size);
}

bool q_enqueue(queue *q, int value){
    if (q_full(q)){
        return false;
    }
    q->value[q->tail] = value;
    q->num_entries++;
    q->tail = (q->tail + 1)% q->size;

    return false;
}

int q_dequeue(queue *q){

    int result;
    if (q_empty(q)){
        return QUEUE_EMPTY;
    }
    result= q->value[q->head];
    q->num_entries--;
    q->head = (q->head +1) % q->size;
    return result;
}
