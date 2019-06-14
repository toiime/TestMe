#include "executeCmd.h"

#include <QDebug>


ExecuteCmd::ExecuteCmd() {

}

ExecuteCmd::~ExecuteCmd() {

}

void ExecuteCmd::Execute() {
	qDebug() << _windowsCmd.TestCmd();
}