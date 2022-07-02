#include <stdio.h>

/**
*main-prints the size of various types
*Return: 0 if exited properly, non-zero otherwise
*/

int main(void)
{

printf("Side of a char:%d byte(s)\n",sizeof(char));
printf("Side of an int:%d byte(s)\n",sizeof(int));
printf("Side of a long int:%d byte(s)\n",sizeof(long long int));
printf("Side of a float:%d byte(s)\n",sizeof(float));
return (0);

}


