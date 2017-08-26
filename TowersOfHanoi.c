// TowersOfHanoi.c
#include <stdio.h>

void tower(char, char, char, int);

int main(void) {
	int disks;
	printf("Number of disks: ");
	scanf("%d", &disks);
	tower('A','B','C', disks);
	return 0;
}

// Towers of Hanoi
void tower(char source, char temp, char dest, int n) {
	if (n > 0) {
		tower(source, dest, temp, n-1);
		printf("Move disk %d from peg %c to peg %c\n", n, source, dest);
		tower(temp, source, dest, n-1);
	}
}

