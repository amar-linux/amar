#include<stdio.h>
#include<stdint.h>

const char *messages[] = {
    "Not a party. You are alone .",
    "Not a party. You are alone-1 .",
    "Not a party. You are alone -2.",
    "Not a party. You are alone -3.",
    "Not a party. You are alone -4.",
    "Not a party. You are alone -5.",
    "Not a party. You are alone -6.",
    "Not a party. You are alone .-7",
    "FIre code Violation .-35",
};


const int NUM_MESSAGES= (sizeof(messages)/ sizeof(char*));

void print_party_size_info(size_t people){

    if (people > NUM_MESSAGES-1){
        printf("%s\n",messages[NUM_MESSAGES-1]);
    }else{
        printf("%s\n",messages[people]);
    }
}

int main(){


    print_party_size_info(0);
    print_party_size_info(1);
    print_party_size_info(2);
    print_party_size_info(3);
    print_party_size_info(4);
    print_party_size_info(5);
    print_party_size_info(6);
    print_party_size_info(7);
    print_party_size_info(35);
}
