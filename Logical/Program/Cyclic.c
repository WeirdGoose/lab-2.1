
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _CYCLIC ProgramCyclic(void)
{
	FB_DoorStateMachine(&doorSMFB);
	driveSMFB.speed = doorSMFB.speed;
	FB_DriveStateMachine(&driveSMFB);
	ledSMFB.state = doorSMFB.state;
	FB_LedStateMachine(&ledSMFB);
}
