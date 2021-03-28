#include <stdio.h>
// Program najde a vypíše největší číslo v poli

int main() 
{
   int pole[10] = {64, -51, -96, 10, 32, 24, 78, 82, -92, 9};
   int loop, largest;

   largest = pole[0];
   
   for(loop = 1; loop < 10; loop++) 
   {
      if(largest < pole[loop]) 
         largest = pole[loop];
   }
   
   printf("Největší číslo v poli je: %d", largest);   
   return 0;
}