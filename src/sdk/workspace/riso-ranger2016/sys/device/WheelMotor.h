///////////////////////////////////////////////////////////
//  WheelMotor.h
//  Implementation of the Class WheelMotor
//  Created on:      2016/07/15 16:04:16
//  Original author: 039889
///////////////////////////////////////////////////////////

#if !defined(EA_68ADC4F5_CD7A_4d03_94F4_3F235BA26AB5__INCLUDED_)
#define EA_68ADC4F5_CD7A_4d03_94F4_3F235BA26AB5__INCLUDED_

#include "ev3api.h"

class WheelMotor
{

public:
	WheelMotor(motor_port_t PortNum);
	virtual ~WheelMotor();

	void ResetEnc();
	int GetEnc();
	void SetPWMValue(signed char PWMValue);

};
#endif // !defined(EA_68ADC4F5_CD7A_4d03_94F4_3F235BA26AB5__INCLUDED_)
