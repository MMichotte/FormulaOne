
#include "generated_random_numbers.h"

void random_seed(unsigned int seed) { srand(seed); }

int sector_range(int min, int max, int crashing_probability) {
  car_crashed(crashing_probability);
  return rand() % (max * 1000 + 1 - min * 1000) + min * 1000;
}

int stand_duration(int min, int max) {
  return rand() % (max * 1000 + 1 - min * 1000) + min * 1000;
}

int stand_probability(int seed) { return rand() % seed == 0; }

// runs in a certain probability, like 1/seed
int car_crashed(unsigned int seed) { return rand() % seed == 0; }
