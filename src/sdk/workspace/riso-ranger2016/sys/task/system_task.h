///////////////////////////////////////////////////////////
//  system_task.h
//  Implementation of the Class system_task
//  Created on:      2016/04/28 11:21:26
//  Original author: 037789
///////////////////////////////////////////////////////////

#if !defined(EA_B0DE3A01_003D_4139_ABC8_D1E1FF53B040__INCLUDED_)
#define EA_B0DE3A01_003D_4139_ABC8_D1E1FF53B040__INCLUDED_


typedef enum _EmTaskId{
    kTaskMain,
    kTaskHighPriority,
    kTaskEngine,
    kTaskDebugConsole,

    kMaxTaskId
} EmTaskId;

// -----------------------------------------------------------------------------
//! @brief main タスク
//!
//! 電源 ON 時カーネルが自動的に起動をかけるタスク.
//! 主な責務は以下.
//!   - 他のタスクを起動する
//!   - ハートビート、ウォッチドッグなどの軽い定常処理.
//! @exception none
// -----------------------------------------------------------------------------
extern "C" void TaskMain();

extern "C" void TaskHighPriority();

extern "C" void TaskEngine();

extern "C" void TaskDebugConsole();

#if 0                           // 未実装.
extern "C" void TaskCommunication();

extern "C" void TaskLongTermOperation();

extern "C" void TaskShortCycleOperation();

#endif

class system_task
{

public:
	system_task();
	virtual ~system_task();

};
#endif // !defined(EA_B0DE3A01_003D_4139_ABC8_D1E1FF53B040__INCLUDED_)
