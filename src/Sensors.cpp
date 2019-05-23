#include "main.h"

pros::ADIGyro gyro (1);
pros::ADIEncoder LeftDrive_Encoder (5, 6, false);
pros::ADIEncoder RightDrive_Encoder (7, 8, true);

// Returns the gyro's current position in degrees
int GyroDeg() {
  return (int(gyro.get_value()) / 10);
}

int BLDrive_E() {
    return LeftDrive_Encoder.get_value();
}

int BRDrive_E() {
    return RightDrive_Encoder.get_value();
}

int FRDrive_I() {
    return (FRDrive_Motor.get_position() * -1);
}

int FLDrive_I() {
    return (FLDrive_Motor.get_position() * -1);
}

int BRDrive_I() {
    return (BRDrive_Motor.get_position() * -1);
}

int BLDrive_I() {
    return (BLDrive_Motor.get_position() * -1);
}