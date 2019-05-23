#include "main.h"

pros::Motor FRDrive_Motor (FRDriveMotorPort, pros::E_MOTOR_GEARSET_18,pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor FLDrive_Motor (FLDriveMotorPort, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor BRDrive_Motor (BRDriveMotorPort, pros::E_MOTOR_GEARSET_18, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor BLDrive_Motor (BLDriveMotorPort, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);

// external encoders have a 2.9 to 1 ratio when strafing

void Chassie(void* param) {
    int RightSide;
    int LeftSide;
    while (GyroDeg() != 0) {
        pros::delay(20);
    }
    while (true) {
        RightSide = master.get_analog(ANALOG_LEFT_Y) + (GyroDeg() * );
        LeftSide = master.get_analog(ANALOG_LEFT_Y) - (GyroDeg() * );
        if (master.get_digital(DIGITAL_L1)) {
            FRDrive_Motor.move(-master.get_analog(ANALOG_LEFT_X) + RightSide);
            BRDrive_Motor.move(master.get_analog(ANALOG_LEFT_X) + RightSide);
            FLDrive_Motor.move(master.get_analog(ANALOG_LEFT_X) + LeftSide);
            BLDrive_Motor.move(-master.get_analog(ANALOG_LEFT_X) + LeftSide);
        }
        else {
            FRDrive_Motor.move(0);
            BRDrive_Motor.move(0);
            FLDrive_Motor.move(0);
            BLDrive_Motor.move(0);
        }
        pros::delay(20);
    }
}

// void Chassie_Move() {}