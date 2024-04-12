#include <stdio.h>
/* Задание 1.5. Печать таблицы температур по Фаренгейту и Цельсию от 300 до 0*/
main()
{
 int fahr;
 for (fahr = 300; fahr >= 0; fahr = fahr - 30)
 printf ("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
