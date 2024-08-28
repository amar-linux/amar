#include<stdio.h>

struct counters{
    unsigned int little:2;
    unsigned int medium:4;
    unsigned int large:6;
}__attribute__((packed));

#define NUM_LOOPS 50

int main(){
    struct counters counts;
    counts.little = 0;
    counts.medium = 0;
    counts.large  = 0;

    for (int i =0; i < NUM_LOOPS; i++){
        counts.little++;
        counts.medium++;
        counts.large++;
        printf ("%u, %u, %u\n ",counts.little, counts.medium, counts.large);

    }
    printf ("The size of struct is %lu\n", sizeof(struct counters));

}
