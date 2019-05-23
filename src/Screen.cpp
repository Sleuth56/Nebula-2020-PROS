#include "main.h"

int Screens = 0;
int OldScreens = Screens;

// Toggle button for parking in auton
void on_center_button() {
  Screens = 0;
}

// Cycles through the autons going to the left
void on_left_button() {
  Screens = 1;
}

// Cycles through the autons going to the left
void on_right_button() {
  Screens = 1;
}

// This thread is responsible for printing out diagnostic data to the terminal
// Screen width is 46 spaces
void Screen(void* param) {
    pros::lcd::register_btn1_cb(on_center_button);
    pros::lcd::register_btn0_cb(on_left_button);
    pros::lcd::register_btn2_cb(on_right_button);
    while (true) {
        if (Screens != OldScreens) {
            for( int a = 0; a < 10; a = a + 1 ) {
                pros::lcd::clear_line(a);
            }
            OldScreens = Screens;
        }
        if (Screens == 0){
            pros::lcd::print(0, "   %d", GyroDeg());
            pros::lcd::print(1, "%d     %d", FLDrive_I(), FRDrive_I());
            pros::lcd::print(3, "%d     %d", BLDrive_I(), BRDrive_I());
            pros::lcd::print(4, "%d     %d", BLDrive_E(), BRDrive_E());
        }
        else if (Screens == 1) {
            pros::lcd::print(0, "Hello World");
        }
        pros::delay(20);   
    }
}