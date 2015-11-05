#include "CoordinationCommand.h"
#include <string>
using namespace std;
CoordinationCommand ::CoordinationCommand () {
setType("CoordinationCommand");
addDynamicContext("command", "java.lang.String"); 
		addDynamicContext("ping", "boolean");
		addDynamicContextVal("ping", "false");
		setBase("BaseEventType");
}
