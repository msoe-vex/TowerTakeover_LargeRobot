#include "chassis.h"

chassis::chassis(int leftDriveMotorPort, int rightDriveMotorPort) {
  leftDriveMotor = new pros::Motor(leftDriveMotorPort);
  rightDriveMotor = new pros::Motor(rightDriveMotorPort);
}

int chassis::setSpeed(int leftDriveSpeed, int rightDriveSpeed) {
  leftDriveMotor -> equals(leftDriveSpeed);
  rightDriveMotor -> equals(rightDriveMotor);
}

chassis::~chassis() { // Deconstructor
  free(leftDriveMotor); // Free memory
  free(rightDriveMotor); // Free memory

  leftDriveMotor = 0; // Clear reference
  rightDriveMotor = 0; // Clear reference
}
