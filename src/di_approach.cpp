#include "path_follower.h"

int main() {
  ControllerImpl controller{};
  PathFollower pathFollower{controller};

  pathFollower.moveForward();
  pathFollower.moveBackward();

  return 0;
}
