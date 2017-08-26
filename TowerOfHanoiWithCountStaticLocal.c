// TowersOfHanoi.c
#include <stdio.h>

int tower(char, char, char, int); 

int main() {
	int disks, steps;
	printf("Number of disks: ");
	scanf("%d", &disks);
	steps = tower('A','B','C', disks);
	printf("\n");
	printf("The total number of steps taken for %d disks is %d\n", disks, steps);
	return 0;
}

// Towers of Hanoi 
int tower(char source, char temp, char dest, int n) {
	static int noOfSteps = 0;
	if (n > 0) {
		noOfSteps = tower(source, dest, temp, n-1);
		printf("Move disk %d from peg %c to peg %c\n", n, source, dest);
		noOfSteps++;
		noOfSteps = tower(temp, source, dest, n-1);
	}
	return noOfSteps;
}
