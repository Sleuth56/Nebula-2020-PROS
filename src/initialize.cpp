#include "main.h"

void initialize() {
  pros::lcd::initialize();
  pros::Task Screen_TR(Screen, (void*)"PROS", TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "My Task");
  FRDrive_Motor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
  BLDrive_Motor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
  BRDrive_Motor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
  FLDrive_Motor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
}

void disabled() {}

void competition_initialize() {}
