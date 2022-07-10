from abc import ABC, abstractmethod

class ControllerInterface(ABC):
    @abstractmethod
    def update(self, direction: int):
        raise NotImplementedError

class PIDController(ControllerInterface):
    def update(self, direction: int):
        if direction > 0:
            print("Increasing forward velocity")
        elif direction < 0:
            print("Increasing backward velocity")

class PathFollower:
    def __init__(self, controller: ControllerInterface):
        self.controller = controller

    def move_forward(self):
        self.controller.update(1)

    def move_backward(self):
        self.controller.update(-1)

if __name__ == '__main__':
    controller = PIDController()
    path_follower = PathFollower(controller)

    path_follower.move_forward()
    path_follower.move_backward()