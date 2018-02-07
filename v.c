#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc < 2){
        printf ("Dont' forget to pass arguments!\n");
        return(-1);
    }
 printf ("You have executed the program : %s\n", argv[0]);
 for(int i = 1; i < argc; i++){
       
        else if(strspn(argv[i], "0123456789") == strlen(argv[i])) {
         
  
        {
            printf("%s - this string might contein digits, small letters and path symbols. It could be used for passing a file name or a path, for example.\n",argv[i]);
        }
        else if(strspn(argv[i], "ABCDEFGHIJKLMNOPQRSTUVWXYZ") == strlen(argv[i]))
        {
         return 0;
         }
