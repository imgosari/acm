#include <stdio.h>
int n;
int str = 0;
int bal = 0;
int arr[1000];
void checking(int com, int num)
{
   str = 0;
   bal = 0;
   if (com / 100 == num / 100) str++;
   if (com % 100 / 10 == num % 100 / 10) str++;
   if (com % 10 == num % 10) str++;

   if (com / 100 != num / 100)
   {
      if (com % 100 / 10 == num / 100) bal++;
      else if (com % 10 == num / 100) bal++;
   }
   if (com % 100 / 10 != num % 100 / 10)
   {
      if (com / 100 == num % 100 / 10) bal++;
      else if (com % 10 == num % 100 / 10) bal++; 


   }
   if (com % 10 != num % 10)
   {
      if (com / 100 == num % 10) bal++;
      else if (com % 100 / 10 == num % 10) bal++;
   }
}


int main()
{
   scanf("%d", &n);
   int c = n;
   int number, strike, ball;
   while (n--)
   {
      scanf("%d %d %d", &number, &strike, &ball);
      for (int i = 100; i <= 999; i++)
      {
         checking(i, number);
         if (str == strike && ball == bal) arr[i] ++;
      }
   }
   int count = 0;
   for (int i = 100; i <= 999; i++)
   {
      if (arr[i] == c) count++;
   }
   printf("%d", count);

   return 0;
}