/*
Rock paper sissors extented
*/

#include <iostream>
#include <cstdlib>

int main() {
  srand(time(NULL));
  int computer = std::rand() % 3 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "Rock paper scissors!\n";
  std::cout << "====================\n";
  
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌\n";
  
  std::cout << "shoot!\n";

  std::cin >> user;

  if (user == 1) {
    std::cout << "you choose: ✊\n";
  } else if (user == 2) {
    std::cout << "you choose: ✋\n";
  } else {
    std::cout << "you choose: ✌️\n";
  }
  if (computer == 1) {
    std::cout << "cpu choose: ✊\n";
  } else if (computer == 2) {
    std::cout << "cpu choose: ✋\n";
  } else {
    std::cout << "cpu choose: ✌️\n";
  }

  if (user == 1) {
    switch(computer) {
      case 1:
        std::cout << "It's a tie!\n";
        break;
      case 2:
        std::cout << "You loose :)\n";
        break;
      case 3:
        std::cout << "You win!\n";
        break;
    }
  } else if (user == 2) {
    switch(computer) {
      case 2:
        std::cout << "It's a tie!\n";
        break;
      case 1:
        std::cout << "You win -.-\n";
        break;
      case 3:
        std::cout << "You looseeeee!\n";
        break;
    }
  } else if (user == 3) {
    switch(computer) {
      case 3:
        std::cout << "It's a tie!\n";
        break;
      case 2:
        std::cout << "You win :D\n";
        break;
      case 1:
        std::cout << "You looose!\n";
        break;
    }
  } else {
    std::cout << "Invalid Input!\n";
  }
}
