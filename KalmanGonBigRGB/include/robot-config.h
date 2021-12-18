using namespace vex;

extern brain Brain;

// VEXcode devices
extern drivetrain Drivetrain;
extern motor RightTail;
extern motor BigArm;
extern motor29 R1;
extern motor29 B1;
extern motor29 Ground1;
extern motor29 R2;
extern motor29 B2;
extern motor29 Ground2;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );