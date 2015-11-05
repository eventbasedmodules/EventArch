#include "BaseEventType.h"
#include <string>
using namespace std;
BaseEventType ::BaseEventType () {
setType("BaseEventType");
addDynamicContext("publisher", "java.lang.String"); 
addDynamicContext("publisherGroup", "java.lang.String"); 
addDynamicContext("publisherInstance", "java.lang.String"); 
addDynamicContext("target", "java.lang.String"); 
addDynamicContext("targetGroup", "java.lang.String"); 
addDynamicContext("targetInstance", "java.lang.String"); 
addDynamicContext("timestamp", "java.lang.Long"); 
addDynamicContext("thread", "java.lang.Long"); 
addDynamicContext("scope", "java.lang.String"); 
		addDynamicContext("ping", "boolean");
		addDynamicContextVal("ping", "false");
}
