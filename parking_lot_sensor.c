/*
Name: William Scarborough
Course: CSE 1320
Assignment: Parking Lot Sensor
Description: A sensor to check and print whether each parking space is occupied or available, changes the third space to occupied, and prints the total number of occupied and available spaces.
*/


#include <stdio.h>

// Changes a space from available to occupied.
void occupySpace(int *space)
{
    *space = 1;
}

// Counts and returns the number of occupied spaces.
int countOccupied(int *spaces, int size)
{
    int total = 0;
    for (int i = 0; i < size; i++) {
        if (*(spaces + i) == 1) {
            total += 1;
        }
    }
    return total;
}

// Main Function
int main(void)
{
    int spaces[5] = {0, 1, 0, 0, 1};
    int *space = spaces;

    printf("Parking Lot:\n");

    // Checks and prints whether each space is occupied or available.
    for (int i = 0; i < 5; i++)
    {
        printf("Space %d: %s\n",
               i + 1,
               *(space + i) ? "Occupied" : "Available");
    }

    // Space 3 becomes occupied
    occupySpace(space + 2);

    int occupied = countOccupied(spaces, 5);

    // Prints the total number of occupied spaces.
    printf("\nTotal occupied: %d\n", occupied);

    return 0;
}