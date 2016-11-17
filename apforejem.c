#include <stdio.h>
int main()
  
  //Ejemplo apuntadores usando ciclo For :v
{
int k;
int *ptr;
ptr=&k;
for(*ptr=0; *ptr<5; (*ptr)++)
{
printf("k=%d\n",k);
}
return 0;
}
