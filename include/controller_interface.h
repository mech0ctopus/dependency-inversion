#pragma once

class ControllerInterface {
 public:
  virtual void update(const int direction) = 0;
  virtual ~ControllerInterface() = default;
};

class ControllerImpl final : public ControllerInterface {
  void update(const int direction) override;
};
