#ifndef EXECUTE_CMD_H_
#define EXECUTE_CMD_H_

#include "globalInclude.h"
#include "WindowsCmd/Include/windowsCmd.h"

class ExecuteCmd {
public:
	ExecuteCmd();
	~ExecuteCmd();

	void Execute();

	WindowsCmd _windowsCmd;
};

#endif // !EXECUTE_CMD_H_