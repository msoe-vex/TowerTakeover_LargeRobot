#pragma once

#include "api.h"

class chassis {
public:
  pros::Motor *leftDriveMotor, *rightDriveMotor;

  chassis(int leftDriveMotorPort, int rightDriveMotorPort);

  int setSpeed(int leftDriveSpeed, int rightDriveSpeed);

  ~chassis();
};
