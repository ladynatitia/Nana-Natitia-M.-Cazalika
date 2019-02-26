#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

 int main(int argc, string argv[])
 {

     if(argc==2)
     {
string p;
         int k=atoi(argv[1]);
          p= get_string("Your text: ");

         printf("The encrypted text is: ");
     }
     for(int i=0; i<strlen(p); i++)

     if(isalpha(p[i]))
     {
      if (isupper(p[i]))
      {
          printf("%c",(((p[i]-65)+k)%26)+97);
      }
      if(islower(p[i]))
      {
          printf("%c",(((p[i]-97)+k)%26)+97);
      }
     }
     else if
     {
         printf("%c", p[i]);
     }
     printf("\n");

 }