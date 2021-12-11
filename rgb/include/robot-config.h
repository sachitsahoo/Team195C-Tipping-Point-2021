using namespace vex;

extern brain Brain;

// VEXcode devices
extern digital_out B1;
extern digital_out Ground1;
extern digital_out R2;
extern digital_out G2;
extern digital_out B2;
extern digital_out Ground2;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );