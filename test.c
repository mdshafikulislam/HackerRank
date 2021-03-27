//ASCII valo 
#include <stdio.h>

int main() {
    int i;
    
   for(i=0;i<=126;i++){
        printf("ASCII code for %c is %d\n",i,i);
   }
    return 0;
}

//capital_letter
#include <stdio.h>

int main() {
   char small_letter,capital_letter;
   printf("Please enter a small letter :");
   small_letter=getchar();
   capital_letter=small_letter - 32;
   printf("The capital letter is : %c\n",capital_letter);
   
    return 0;
}
