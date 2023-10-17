#include <stdio.h>

int main() {
    int initial_llamas = 1200;  // Initial population of llamas
    int new_llamas, passed_away;  // Variables to store new llamas born and llamas passed away

    // Calculate new llamas born and llamas passed away
    new_llamas = initial_llamas / 3;
    passed_away = initial_llamas / 4;

    // Update llama population at the end of the year
    int final_llamas = initial_llamas + new_llamas - passed_away;

    // Print the updated population
    printf("At the end of the year, the llama population is: %d\n", final_llamas);

    return 0;
}
