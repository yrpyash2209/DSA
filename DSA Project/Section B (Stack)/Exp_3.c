#include <stdio.h>
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, destination, source);
}
int main() {
    int n; // Number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("The sequence of moves to solve the Tower of Hanoi with %d disks is:\n", n);
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B, and C are names of rods
    return 0;}
