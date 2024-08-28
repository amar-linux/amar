


#ifndef MY_QUEUE_H
#define MY_QUEUE_H

#include<stdbool.h>
#include<limits.h>

#define QUEUE_EMPTY INT_MIN

typedef struct {
    int* value;
    int head, tail, num_entries, size;
}queue;


queue* q_create(int max_size);
void q_destroy(queue *q);
bool q_empty(queue *q);
bool q_full(queue *q);
bool q_enqueue(queue *q, int value);
int q_deque(queue *q);


#endif // MY_QUEUE_h
