#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>


int main (int argc, string argv[])
{
    if (argc==2)
  {
    int geekl =53;
    string crazy = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string hash=argv[1];
    char salt[3];
    memcpy(salt, hash,2);
    salt[2]='\0';

    char key_compass[6]="\0\0\0\0\0";

    for (int play=0; play<geekl; play++)
    {
        for(int laugh=0; laugh<geekl; laugh++)

        {
            for(int love=0; love<geekl; love++)
        {
            for(int share=0; share<geekl; share++)
            {

key_compass[0]=crazy[share];
key_compass[1]=crazy[love];
key_compass[2]=crazy[laugh];
key_compass[3]=crazy[play];


if(strcmp(crypt(key_compass,salt), hash)==0)
{
printf("%s\n" , key_compass);
return 0;
     }

        }


    }

    }
    }
  }
}
