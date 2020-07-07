/* This C program demonstrates how to create a tower of Hanoi program using recursive functions */

#include <stdio.h>
#include <stdlib.h>

// Function prototype
void hanoi(char from, char to, char other, int n); 

int main()
{
	int n;

	printf("Input the number of disks: ");
	scanf("%d", &n);
	if (n <= 0) {
		printf("Illegal number\n");
		exit(-1);
	}
	else
	{
		hanoi('a', 'c', 'b', n);
		exit(0);
	}
}
void hanoi(from, to, other, n)
char from, to, other, n;
{
	if (n == 1)
		printf("Move disk from %c to %c\n", from, to);
		else
		{
			hanoi(from, other, to, n - 1);
			hanoi(from, to, other, 1);
			hanoi(other, to, from, n - 1);
		}
}
