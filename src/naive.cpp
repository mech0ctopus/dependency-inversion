#include "path_follower_naive.h"

int main() {
  pidController pid;
  PathFollower pathFollower(pid);

  pathFollower.moveForward();
  pathFollower.moveBackward();

  return 0;
}
