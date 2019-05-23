//------Motor Ports------
#define FRDriveMotorPort 4
#define FLDriveMotorPort 2
#define BRDriveMotorPort 5
#define BLDriveMotorPort 1

//------Motor Objects------
extern pros::Motor FRDrive_Motor;
extern pros::Motor FLDrive_Motor;
extern pros::Motor BRDrive_Motor;
extern pros::Motor BLDrive_Motor;

//------Controllers------
extern pros::Controller master;

//------Joistics------
extern int LeftJoistic;
extern int RightJoistic;


//------Functions------
bool AtDistanceDriveGoal(int threshold);
int GyroDeg();
int BLDrive_E();
int BRDrive_E();
int FRDrive_I();
int FLDrive_I();
int BRDrive_I();
int BLDrive_I();
void Chassie(void* param);
void Screen(void* param);