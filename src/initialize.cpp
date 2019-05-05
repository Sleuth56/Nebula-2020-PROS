#include "main.h"

// Toggle button for parking in auton
void on_center_button() {
}

// Cycles through the autons going to the left
void on_left_button() {
}

// Cycles through the autons going to the left
void on_right_button() {
}

void initialize() {
  // Initializes the lcd screen and prints initial text
  pros::lcd::initialize();

  // Sets the callback function for each button
  pros::lcd::register_btn1_cb(on_center_button);
  pros::lcd::register_btn0_cb(on_left_button);
  pros::lcd::register_btn2_cb(on_right_button);

  // Starts a thread for diagnostics
  pros::Task Telemitry(Telemitry_fn, (void*)"PROS", TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "My Task");

  // Prints to the consol that Init has finished
  printf("Init finished\n");
}

void disabled() {}

void competition_initialize() {}
