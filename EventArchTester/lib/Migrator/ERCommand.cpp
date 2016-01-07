#include "ERCommand.h"

string ERCommand::types[6] = {"proceed", "suspend", "return", "retry", "invoke", "send"};

ERCommand::commandType ERCommand::getType(){
	return type;
}

string ERCommand::getEvent(){
	return event;
}

ERCommand::commandType ERCommand::getSecondCommand(){
	return secondCommand;
}

void ERCommand::setType(ERCommand::commandType ntype){
	type = ntype;
}

void ERCommand::setEvent(string nevent){
	event = nevent;
}

void ERCommand::setSecondCommand(ERCommand::commandType nsecondCommand){
	secondCommand = nsecondCommand;
}

ERCommand::commandType ERCommand::getTypeForString(string typeString){
	for(int i=0;i<6;i++){
		if(types[i] == typeString){
			return (commandType)i;
		}
	}
	return (commandType)0;
}
