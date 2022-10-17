#include <stdio.h>
#include <stlib.h>
#include <time.h>
/**
 * *main -Entry point
 * *
 * *Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(o));
n = rand () - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > o)
printf(%d is positive\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);

}

