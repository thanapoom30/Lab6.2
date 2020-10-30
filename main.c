#include <stdio.h>
#include<math.h>
int main(void)
{
  int  i,sum;
  sum = 0;

  i=12;

  while(i <=30){

	sum = sum+pow(i,2);

	i+=3;
  }
  printf("Sum is %d\n",sum);
  return 0;
}
