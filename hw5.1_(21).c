#include <stdio.h>

typedef struct // definate the Clock struct
{
   int hr;
   int min;
   int sec;
} CLOCK; 

void sec_increment(CLOCK* a);
void show_the_time(CLOCK a); 
 // declare the local function



int main() // main function
{
   CLOCK a = {0};
   int ic, i=0;
   printf("Enter the starting time (hr min sec): ");
   scanf("%d %d %d", &a.hr, &a.min, &a.sec); // starting clock time
   printf("How many seconds do you want to count? "); 
   scanf("%d", &ic); 
   for (; ic>0; ic--)
   {
   sec_incrment(&a);
   show_the_time(a);
   }
   return 0; 
}

void sec_increment(CLOCK* a)  // definate the clock range.
{
      a->sec += 1;
      if (a->sec == 60){
         a->sec = 0;
         a->min++;
      }
      if (a->min == 60){
         a->min = 0;
         a->hr++;
      }
      if (a->hr == 24) a->hr = 0;
   return;
} 

void show_the_time(CLOCK a) // represent the clock time
{
   printf("%02d:%02d:%02d\n", a.hr, a.min, a.sec);
   return;
}