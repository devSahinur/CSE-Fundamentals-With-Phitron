
#include <stdio.h>

int main(void)
{
   int N;
   scanf("%d",&N);
   for (int i = 0; i < N; i++)
   {
      if(i%2==0 && i%7 ==0){
         printf("%d\n",i);
      }
   }
   

   return 0;
}