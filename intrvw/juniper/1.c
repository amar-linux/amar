// test string 
//


int main(){
   char str[] ="aaaaaaaaaa";
   
   char pattern[]="aaa";
   int i =0;
   int j=0;
   int k =0;
   int count =0;

   while ((str[i]) != '\0'){
       if (str[i] == pattern[j]){
           i++;
           j++;
           if (pattern[j+1] == '\0'){
               count++;
               j=0;
               k++;
               i=k;
               
           }

       }else {
           j=0;
        
        
       }
   }


}
