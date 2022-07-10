#include "controller_interface.h"

class PathFollower {
 public:
  PathFollower(ControllerInterface &controllerInterface) : controllerInterface_{controllerInterface}{}

  void moveForward() {
    controllerInterface_.update(1);
  }

  void moveBackward() {
    controllerInterface_.update(-1);
  }

 private:
  ControllerInterface &controllerInterface_;
};
