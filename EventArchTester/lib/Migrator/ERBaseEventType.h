/*
 * ERBseEventType.h
 *
 *  Created on: Aug 20, 2014
 *      Author: stguser
 */
#include <string>
#include <cstring>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <map>
using namespace std;
#ifndef ERBSEEVENTTYPE_H_
#define ERBSEEVENTTYPE_H_

class ERBaseEventType {
public:
	ERBaseEventType();
	map<string, string> staticContext;
	map<string, string> dynamicContext;
	map<string, string> staticContextVals;
	map<string, string> dynamicContextVals;
	string type;
	string eventName;
	string base;


	map<string, string> getStaticContext();
	map<string, string> getDynamicContext();	
	void setStaticContext(map<string, string> );
	void setDynamicContext(map<string, string> );
	map<string, string> getStaticContextVals();
	map<string, string> getDynamicContextVals();	
	void setStaticContextVals(map<string, string> );
	void setDynamicContextVals(map<string, string> );

	void addDynamicContext(string , string);
	void addStaticContext(string , string);
	void addDynamicContextVal(string , string);
	void addStaticContextVal(string , string);

	string getDynamicContext(string);
	string getStaticContext(string);
	string getDynamicContextVal(string);
	string getStaticContextVal(string);

	string getType();
	void setType(string);
	void setBase(string );
	void setEventName(string);
	string getEventName();
	virtual ~ERBaseEventType();

private:
	string nullString;
};

#endif /* ERBSEEVENTTYPE_H_ */
