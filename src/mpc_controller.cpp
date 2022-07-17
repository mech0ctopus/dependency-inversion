#include "controller_interface.h"
#include <iostream>

using mpcController = ControllerImpl;

void mpcController::update(const int direction) {
  if (direction > 0){
    std::cout << "Increasing forward velocity from MPC" << std::endl;
  } else if (direction < 0){
    std::cout << "Increasing backward velocity from MPC" << std::endl;
  }
}
