#include "controller_interface.h"
#include <iostream>

class pidController final : public ControllerInterface {
  void update(const int direction) override {
    if (direction > 0){
      std::cout << "Increasing forward velocity" << std::endl;
    } else if (direction < 0){
      std::cout << "Increasing backward velocity" << std::endl;
    }
  }
};
