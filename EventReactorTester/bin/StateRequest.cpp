#include "StateRequest.h"
#include <string>
using namespace std;
StateRequest ::StateRequest () {
setType("StateRequest");
		addDynamicContext("ping", "boolean");
		addDynamicContextVal("ping", "false");
		setBase("BaseEventType");
}
