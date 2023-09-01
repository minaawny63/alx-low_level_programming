#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - coin changer
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
int coins[] = {25, 10, 5, 2, 1};
int i, cents, minCoins = 0;
int numCoins;
if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

numCoins = sizeof(coins) / sizeof(coins[0]);

for (i = 0; i < numCoins; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
minCoins++;
}
}

printf("%d\n", minCoins);
return (0);
}
