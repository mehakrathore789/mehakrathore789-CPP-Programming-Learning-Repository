/*
 * Program: Tower of Hanoi
 * Description: Move n disks from source to destination using an
 *              auxiliary rod, following the rules of the classic puzzle.
 */

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 0) return; // base case

    towerOfHanoi(n - 1, source, destination, auxiliary);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numberOfDisks = 3;
    towerOfHanoi(numberOfDisks, 'A', 'B', 'C');
    return 0;
}
