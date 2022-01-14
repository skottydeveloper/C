#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section:
struct Race {
  int numberOfLaps;
  int currentLap;
  char* firstPlaceDriverName;
  char* firstPlaceRaceCarColor;
};

struct RaceCar {
  char* driverName;
  char* raceCarColor;
  int totalLapTime;
};

// Print functions section:
void printIntro() {
  printf("Welcome to our main event digital race fans!\n");
  printf("I hope everybody has their snacks because we are about to begin!");
}

void printCountDown() {
  printf("\nRacers Ready! In...\n");
  
  for (int i = 5; i > 0; i--) {
    printf("%d\n", i);
  }
  printf("Race!\n");
}

void printFirstPlaceAfterLap(struct Race race) {
  printf("After lap number %d:\n", race.currentLap);
  printf("First place is: %s in the %s race car!\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulation(struct RaceCar raceCar) {
  printf("\nLet's all congratulate %s in the %s race car for an amazing performance.\n", raceCar.driverName, raceCar.raceCarColor);
  printf("It truly was a great race and everybody have a goodnight!");
}

// Logic functions section:
int calculateTimeToCompleteLap() {
  int speed = (rand() % 10) + 1; 
  int acceleration = (rand() % 10) + 1;
  int nerves = (rand() % 10) + 1;

  return speed + acceleration + nerves;
}

void updateRaceCar(struct RaceCar* raceCar) {
  int lapTime = calculateTimeToCompleteLap();
  int totalTime = raceCar->totalLapTime; 
  totalTime += lapTime;
}

void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2) {
  if (raceCar1->totalLapTime <= raceCar2->totalLapTime) {
    race->firstPlaceDriverName = raceCar1->driverName;
    race->firstPlaceRaceCarColor = raceCar1->raceCarColor;
  } else {
    race->firstPlaceDriverName = raceCar2->driverName;
    race->firstPlaceRaceCarColor = raceCar2->raceCarColor;
  }
}

void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2) { // This function is problematic, and is preventing the rest of the program's functionality to be performed.
  struct Race race = {5, 1, "", ""};

  for (int i = 0; i <= race.numberOfLaps; i++) {
    updateRaceCar(raceCar2);
    updateFirstPlace(&race, raceCar1, raceCar2);
    printFirstPlaceAfterLap(race);
    race.currentLap++;
  }

  printCongratulation(*raceCar1);
}

int main() {
  struct RaceCar* raceCar1;
  struct RaceCar* raceCar2;
	srand(time(0));
  printIntro();
  printCountDown();
  startRace(&raceCar1, &raceCar2);
};