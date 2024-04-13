#include <stdio.h>
/* Проверка выражения getchar() != EOF */
/* Ctrl+z для вывода 0 */ 
int main()
{
 int c;
 c = (getchar() != EOF);
 printf("%d\n", c);
}