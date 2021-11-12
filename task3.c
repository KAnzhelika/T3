
#include <stdio.h>
 
int main(void)
{
   int d;
   
	do
  {
	printf("day: ") ;
	scanf ("%i", &d);
  }
	while (d > 1 && d < 7);

	if (d == 1)
    {
        printf("Monday\n") ;
    }
	else if (d == 2)
    {
		printf("Tuesday\n") ;
    }
    else if (d == 3)
    {
		printf("Wednesday\n") ;
    }
    else if (d == 4)
    {
		printf("Thursday\n") ;
    }
    else if (d == 5)
    {
		printf("Friday\n") ;
    }
    else if (d == 6)
    {
		printf("Saturday\n") ;
    }
    else if (d == 7)
    {
		printf("Sunday\n") ;
    }

   return 0;
}
