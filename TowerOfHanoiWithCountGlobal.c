// TowersOfHanoi.c
#include <stdio.h>

int noOfSteps = 0;

void tower(char, char, char, int); 

int main() {
	int disks;
	printf("Number of disks: ");
	scanf("%d", &disks);
	tower('A','B','C', disks);
	printf("\n");
	printf("The total number of steps taken for %d disks is %d\n", disks, noOfSteps);
	return 0;
}

// Towers of Hanoi 
void tower(char source, char temp, char dest, int n) {
	if (n > 0) {
		tower(source, dest, temp, n-1);
		printf("Move disk %d from peg %c to peg %c\n", n, source, dest);
		noOfSteps++;
		tower(temp, source, dest, n-1);
	}
}
