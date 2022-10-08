
#include <stdio.h>

int main(void)
{
   int ar[6] = {2, 4, 6, 2, 5, 3};
   int random = 2;
   int isFind = 0;
   for (int i = 0; i < 6; i++)
   {
      for (int j = 0; j < i; j++)
      {
         if (ar[i] * ar[j] == random)
         {
            isFind = 1;
         }
      }
   }
   if (isFind == 1)
   {
      printf("YES\n");
   }
   else if (isFind == 0)
   {
      printf("NO\n");
   }

   return 0;
}