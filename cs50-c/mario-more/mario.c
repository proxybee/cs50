#include <stdio.h>
#include <cs50.h>

void print_pyramids(int height);

int main(void) {
    // Get the height of the pyramids from the user
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // Print the pyramids
    print_pyramids(n);

    return 0;
}

void print_pyramids(int height) {
    for (int i = 0; i < height; i++) {
        // Print spaces for left pyramid
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        // Print hashes for left pyramid
        for (int j = 0; j <= i; j++) {
            printf("#");
        }
        // Print a gap between the pyramids
        printf("  ");
        // Print hashes for right pyramid
        for (int j = 0; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }
}