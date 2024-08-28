str1 ==my name is amarjeet
//
str  Amarjeet is name my.

#define MAXLEN 4096

char *str (char* str1){
    int len = strlen(str1);
    char *str = malloc(sizeof(len+1))
    str[len+1] = '\0';
    int i = len+1;
    next =0;
    while (str[i] != str[0]){
        count=0;
        while (str[i] != ' '){
            i--;
            count++;
            next++;
        }
    strncpy (str[next - count], str1[i+1], count);
    i--;
    next++;
    }
    // dest ---src
    //  }
    
}




