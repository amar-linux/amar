

int search_node(int a, arri, int len){
    for (int i=0; i< len; i++){
        if (a = a[i]){
            return 1;
        }
        return 0;

    }
}

void reverse_string(char *str){
    char *ptr1 = str;
    char* ptr2 = str+len;
    while (!(ptr1 == ptr2)){
        char temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr1--;


    }

}



int main(){
    char str[]= "Hello";
    int len = strlen(str);
    reverse_string(str, len);



}
