#include "pid_controller_naive.h"

class PathFollower {
 public:
  PathFollower(pidController pid) : pid_{pid} {}

  void moveForward() {
    pid_.update(1);
  }

  void moveBackward() {
    pid_.update(-1);
  }

 private:
  pidController pid_;
};
