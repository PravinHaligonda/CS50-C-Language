#include <cs50.h>
#include <stdio.h>

int main(void)
{
   char c = get_char("Do you agree? ");

   if (c == 'y' || c == 'Y')
   {
    printf("Agreed.\n");
   }
   else if (c == 'n' || c == 'N')
   {
    printf("Not Agreed.\n");
   }
   else
   {
    printf("Invalid input or character.\n");
   }
}