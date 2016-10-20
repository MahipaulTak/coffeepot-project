#include <stdio.h>
#include <MockDevices2016\CoffeePot_SimulatorFunctions2016.h>
#include "CoffeePot_2016Main.h"
#include "MyCoffeePotFunctions_forCPP.h"


void My_WaterControlCode_CPP(COFFEEPOT_DEVICE *coffeePot_BaseAddress, unsigned short int waterLevelRequired)
{
	unsigned int waterlevel = CurrentWaterLevel_CPP(coffeePot_BaseAddress);

	while(waterlevel< waterLevelRequired*0.9)
	{

		coffeePot_BaseAddress-> waterInFlowRegister = 40;
		My_SimulateOneSecondPassing_CPP();
		waterlevel = CurrentWaterLevel_CPP(coffeePot_BaseAddress);
	}

}
