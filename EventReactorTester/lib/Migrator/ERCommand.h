#ifndef ERCOMMAND_H_
#define COMMAND_H_

#include "ERBaseEventType.h"

using namespace std;

class ERCommand {

	private:
		enum commandType {proceed, suspend, retrn, retry, invoke, send};
		commandType type;
		string event;
		commandType secondCommand;

	public:		
		static string types[6];
 		commandType getType();
		string getEvent();
		commandType getSecondCommand();
		void setType(commandType);
		void setEvent(string);
		void setSecondCommand(commandType);
		static ERCommand::commandType getTypeForString(string);
};

#endif /* ERCOMMAND_H_ */
