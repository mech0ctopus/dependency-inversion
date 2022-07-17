#include "path_follower.h"

int main() {
  ControllerImpl pid{};
  PathFollower pathFollower{pid};

  pathFollower.moveForward();
  pathFollower.moveBackward();

  return 0;
}
