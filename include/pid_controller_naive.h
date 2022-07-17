#include <iostream>

class pidController {
 public:
  void update(const int direction) {
    if (direction > 0){
      std::cout << "Increasing forward velocity from PID" << std::endl;
    } else if (direction < 0){
      std::cout << "Increasing backward velocity from PID" << std::endl;
    }
  }
};
