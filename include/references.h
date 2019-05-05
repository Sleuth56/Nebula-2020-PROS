/* 
    Port defenitions

    3-Wire sensor ports are defined the same as motors,
    the port numbers for them are 1-8 A-H.
*/

#define FrontRightDrivePort 1
#define FrontLeftDrivePort 2
#define BackRightDrivePort 3
#define BackLeftDrivePort 4

#define Top1 1
#define Bottom1 2
#define Top2 8
#define Bottom2 3



/*  
    Motor refrences
    You refrense your motors with the names assigned here

    EXAMPLE:
    FrontRightDrive.move(100);
    FrontRightDrive.move_relitive(1000, 100);
*/

extern pros::Motor FrontRightDrive;
extern pros::Motor FrontLeftDrive;
extern pros::Motor BackRightDrive;
extern pros::Motor BackLeftDrive;

/* 
    Controller assignments
    You refrense your controllers with the names assigned here.

    EXAMPLE:
    master.get_analog(ANALOG_LEFT_Y);
    
    To add a second controller, add this line of code to this file. 
    Then refrence it the same way as your master controller.

    extern pros::Controller partner;
*/

extern pros::Controller master;


/*  
    3-Wire Legacy devices
    Gyro sensor
    extern pros::ADIGyro gyro;

    Push button
    extern pros::ADIDigitalIn PushButton;
    
    Ultrasonic range finder
    extern pros::ADIUltrasonic ultrasonic;
*/

extern pros::ADIEncoder Top;
extern pros::ADIEncoder Bottom;


/* 
    Verriables are defined the same way as in C++ 

    EXAMPLE:
    extern bool IsPushed;
*/

bool AtDistanceDriveGoal(int threshold);



/* 
    Joistics values are often assigned to a verriable.
    To make them easier to refrense in code.
*/

extern int LeftJoistic;
extern int RightJoistic;



/* 
    Autonomus selector

    If you need to add more than 5 autons.
    Change the number 5 to how many auton you have.
*/

void LCDScriptExecute();
extern int selection;
extern const char *titles[5];
extern void (*scripts[5])();



/* 
    THREADING
    Is something you often need in robotics.
    For example, if you want to automate a button
    for moving a motor to a specific spot
    but still want your drive train to work at the same time.

    void YourFunction(void* param);
    
    is what you want to use
*/

void Telemitry_fn(void* param);