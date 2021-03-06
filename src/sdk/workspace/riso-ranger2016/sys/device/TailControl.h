///////////////////////////////////////////////////////////
//  TailControl.h
//  Implementation of the Class TailControl
//  Created on:      2016/07/21 20:55:36
//  Original author: 039389
///////////////////////////////////////////////////////////

#if !defined(EA_AF7A7D4C_EA3F_49d8_B0CD_3F5D4A6A7B1C__INCLUDED_)
#define EA_AF7A7D4C_EA3F_49d8_B0CD_3F5D4A6A7B1C__INCLUDED_

#include "Motor.h"

class TailControl
{

public:
	TailControl(Motor* tailMotor);
	virtual ~TailControl();

	void Control();
	void SetRefValue(int angle);

private:
	Motor* m_TailMotor;
	int m_RefAngle;

};
#endif // !defined(EA_AF7A7D4C_EA3F_49d8_B0CD_3F5D4A6A7B1C__INCLUDED_)
