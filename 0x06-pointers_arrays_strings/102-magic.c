#include <stdio.h>

int main(void)

{
 int n;
 int a[5];
 int *p;

 a[2] = 1024;
 p = &n;

    
/* Add your code below this line */
*(p + (sizeof(n) / sizeof(*p)) + 1) = 98;
/* Add your code above this line */

   
printf("a[2] = %d\n", a[2]);
    
return 0;
}
