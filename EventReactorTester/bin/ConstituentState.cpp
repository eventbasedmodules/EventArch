#include "ConstituentState.h"
#include <string>
using namespace std;
ConstituentState ::ConstituentState () {
setType("ConstituentState");
addDynamicContext("applicationState", "java.lang.String"); 
addDynamicContext("serverLoad", "java.lang.String"); 
		addDynamicContext("ping", "boolean");
		addDynamicContextVal("ping", "false");
		setBase("BaseEventType");
}
