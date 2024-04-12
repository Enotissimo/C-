#include <stdio.h>
/* Напишите программу, которая будет печатать таблицу соответствия температур по Цельсию 
температурам по Фаренгейту */
main()
{
 float fahr, celsius;
 int lower, upper, step;
 lower = 0; /* нижняя граница таблицы температур */
 upper = 300; /* верхняя граница */
 step = 30; /* шаг */
 fahr = lower;
 printf ("Соответствие температур по Цельсию температурам по Фаренгейту\n");
 while (fahr <= upper) {
 celsius = (5.0/9.0) * (fahr-32.0);
 printf ("%6.1f %3.0f\n", celsius, fahr);
 fahr = fahr + step;
 }
}
