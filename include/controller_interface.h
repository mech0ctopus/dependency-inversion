#pragma once
class ControllerInterface {
 public:
  virtual void update(const int direction) = 0;
  virtual ~ControllerInterface() = default;
};
