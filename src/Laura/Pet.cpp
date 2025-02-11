// #include "Pet.h"
#include "Pet.h"
#include <chrono>
#include <iostream>
#include <string>
#include <thread>

#define COLOR_RESET "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_BOLD "\033[1m"
#define COLOR_UNDERLINE "\033[4m"
#define BG_BLUE "\033[44m"
#define BG_CYAN "\033[46m"
#define COLOR_BROWN "\e[38;5;130m"
#define COLOR_DARK_GREY "\033[90m"
#define COLOR_PINK "\033[38;5;206m"
#define COLOR_LIGHT_PINK "\033[38;5;218m"

// here is where each pet type class is made, cat, dog, and frog.

void Cat::Normal() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying cat ASCII art!
    std::cout << COLOR_PINK << COLOR_BOLD
              << "    /\\_____/\\   \n"
                 "   /  o   o  \\ meow  \n"
                 "  ( ==  ^  == )   _\n"
                 "   )         (   ) )\n"
                 "  (           ) ( ( \n"
                 " ( (  )   (  ) )   ) \n"
                 "(__(__)___(__)__)  )\n"
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_LIGHT_PINK << COLOR_BOLD
              << "    /\\_____/\\   meow \n"
                 "   /  o   o  \\     \n"
                 "  ( ==  ^  == )   _\n"
                 "   )         (  ( (\n"
                 "  (           )  ) ) \n"
                 " ( (  )   (  ) )  ( \n"
                 "(__(__)___(__)__)  )\n"
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}

void Cat::Eating() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying cat ASCII art!
    std::cout
        << "                      \n" // if can we should make this text brown
           "    /\\_____/\\ munch   \n"
           "   /  o   o  \\     \n"
           "  ( ==  ^  == )  _\n"
           "   )         (  ( (\n"
           "  (           )  ) ) \n"
           " ( (  )   (  ) )  ( \n"
           "(__(__)___(__)__)  )\n";
  } else {
    std::cout << "                 munch    \n"
                 "    /\\_____/\\    \n"
                 "   /  o   o  \\        \n"
                 "  ( ==  o  == )   _\n"
                 "   )         (   ) )\n"
                 "  (           ) ( ( \n"
                 " ( (  )   (  ) )   ) \n"
                 "(__(__)___(__)__) (\n";
  }

  frameToggle = !frameToggle; // toggles frames
}

void Cat::Cleaning() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying cat ASCII art!
    std::cout
        << COLOR_BROWN
        << "                      \n" // if can we should make this text brown
           "    /\\_____/\\ meow   \n"
           "   /  -   -  \\     \n"
           "  ( ==  ^  == )  _\n"
           "   )         (  ( (\n"
           "  (           )  ) ) \n"
           " ( (  )   (  ) )  ( \n"
           "(__(__)___(__)__)  )\n"
        << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BLUE
              << "                 meow    \n"
                 "    /\\_____/\\    \n"
                 "   /  o   o  \\        \n"
                 "  ( ==  ^  == )   _\n"
                 "   )         (   ) )\n"
                 "  (           ) ( ( \n"
                 " ( (  )   (  ) )   ) \n"
                 "(__(__)___(__)__) (\n"
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}

void Cat::Sleeping() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying cat ASCII art!
    std::cout << COLOR_DARK_GREY << COLOR_BOLD
              << "                      \n"
                 "    /\\_____/\\   Z \n"
                 "   /  -   -  \\ Z    \n"
                 "  ( ==  ^  == )  _\n"
                 "   )         (  ( (\n"
                 "  (           )  ) ) \n"
                 " ( (  )   (  ) )( ( \n"
                 "(__(__)___(__)__)  )\n"
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BOLD
              << "                 Z    \n"
                 "    /\\_____/\\   Z \n"
                 "   /  -   -  \\        \n"
                 "  ( ==  ^  == )   _\n"
                 "   )         (   ) )\n"
                 "  (           ) ( ( \n"
                 " ( (  )   (  ) ) ) ) \n"
                 "(__(__)___(__)__) (\n"
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}

void Cat::Died() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying cat ASCII art!
    std::cout << COLOR_RED
              << "                      \n"
                 "    /\\_____/\\    \n"
                 "   /  X   X  \\     \n"
                 "  ( ==  ^  == )  _\n"
                 "   )         (  ( (\n"
                 "  (           )  ) ) \n"
                 " ( (  )   (  ) )  ( \n"
                 "(__(__)___(__)__)  )\n"
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BOLD
              << "                     \n"
                 "    /\\_____/\\    \n"
                 "   /  X   X  \\        \n"
                 "  ( ==  ^  == )  _\n"
                 "   )         (  ( (\n"
                 "  (           )  ) ) \n"
                 " ( (  )   (  ) )  ( \n"
                 "(__(__)___(__)__) )\n"
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}

void Cat::clearScreen() { std::cout << "\033[2J\033[H"; }

void Cat::displayNormal(int numFrames = 6, int frameDelay = 500) {
  for (int i = 0; i < numFrames; ++i) {
    clearScreen();
    Normal();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  }
}

void Cat::displayEating(int numFrames = 6, int frameDelay = 500) {
  for (int i = 0; i < numFrames; ++i) {
    clearScreen();
    Eating();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

void Cat::displayCleaning(int numFrames = 6, int frameDelay = 500) {
  for (int i = 0; i < numFrames; ++i) {
    clearScreen();
    Cleaning();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

void Cat::displaySleeping(int numFrames = 6, int frameDelay = 500) {
  for (int i = 0; i < numFrames; ++i) {
    clearScreen();
    Sleeping();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

void Cat::displayDied(int numFrames = 6, int frameDelay = 500) {
  for (int i = 0; i < numFrames; ++i) {
    clearScreen();
    Died();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

// TEST SPRITES
int main() {
  Cat testCat;
  testCat.displayNormal();
  testCat.displayEating();
  testCat.displayCleaning();
  testCat.displaySleeping();
  testCat.displayDied();

  return 0;
}