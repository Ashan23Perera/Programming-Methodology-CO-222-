// TowersOfHanoi.c
#include <stdio.h>

void tower(char, char, char, int, int*); 

int main() {
	int disks, noOfSteps = 0;
	printf("Number of disks: ");
	scanf("%d", &disks);
	tower('A','B','C', disks, &noOfSteps);
	printf("\n");
	printf("The total number of steps taken for %d disks is %d\n", disks, noOfSteps);	
	return 0;
}

// Towers of Hanoi 
void tower(char source, char temp, char dest, int n, int* steps) {
	if (n > 0) {
		tower(source, dest, temp, n-1, steps);
		printf("Move disk %d from peg %c to peg %c\n", n, source, dest);
		(*steps)++;
		tower(temp, source, dest, n-1, steps);
	}
}
