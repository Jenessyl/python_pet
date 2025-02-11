#include "hunger.h"
#include <ctime>

// This function ativates the feed action
void feed(std::string petName) {
  color_text("〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰", 'C');
  color_text("🍗 IT IS FEEDING TIME! 🍗", 'C');
  color_text("〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰", 'C');
  // show sprite of bathtime

  // Generating a random scenario
  int ScenarioNum;
  ScenarioNum = (rand() % 5);

  switch (ScenarioNum) {
  case 0:
    std::cout << petName << " had a yummy snack!" << std::endl;
    petBars.increaseHungerPoints(15);
    petBars.increaseHappinessPoints(5);
    color_text("Happiness +5", 'G');
    color_text("Hunger +15", 'G');
    break;
  case 1:
    std::cout << petName << " had the best taqueria burrito!" << std::endl;
    petBars.increaseHealthPoints(15);
    petBars.increaseHungerPoints(25);
    petBars.increaseHappinessPoints(5);
    color_text("Health +15", 'G');
    color_text("Hunger +25", 'G');
    color_text("Happiness +5", 'G');

    break;
  case 2:
    std::cout << "Oh no! " << petName << " choked on their snack :("
              << std::endl;
    petBars.increaseHungerPoints(10);
    petBars.decreaseHygienePoints(5);
    petBars.decreaseHealthPoints(15);
    petBars.decreaseSleepPoints(5);
    color_text("Hunger +10", 'G');
    color_text("Hygiene -5", 'R');
    color_text("Health -15", 'R');
    color_text("Sleep -5", 'R');
    break;
  case 3:
    std::cout << petName
              << " accidentally ate spoiled food and got an upset stomach :("
              << std::endl;
    petBars.increaseHungerPoints(10);
    petBars.decreaseHygienePoints(10);
    petBars.decreaseHealthPoints(15);
    petBars.decreaseSleepPoints(5);
    color_text("Hunger +10", 'G');
    color_text("Hygiene -10", 'R');
    color_text("Health -15", 'R');
    color_text("Sleep -5", 'R');
    break;
  }

  // Happiness will increase no matter the scenario
  std::cout << std::endl;
  petBars.increaseHappinessPoints(5);
  color_text("❥ " + petName + " thanks you for feeding it ❥", 'C');
  color_text("Happiness +5", 'G');
  std::cout << std::endl;
}
