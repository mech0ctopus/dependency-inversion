#include "path_follower.h"
#include "pid_controller.h"


int main() {
  pidController pid{};
  PathFollower pathFollower{pid};

  pathFollower.moveForward();
  pathFollower.moveBackward();

  return 0;
}
