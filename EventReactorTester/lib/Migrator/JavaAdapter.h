#include <string>
#include <cstring>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <map>
#include "ERBaseEventType.h"
#include "ERCommand.h"
#include <jni.h>
#include <vector>
using namespace std;
#ifndef JAVAADAPTER_H_
#define JAVAADAPTER_H_

class JavaAdapter {
public:
	void setJNIEnv(JNIEnv *);
	void setObj(jobject);
	void registerEvent(ERBaseEventType *);
	void publish(string);
	long getLastPingFor(string);
	void registerWait(string);
	bool activeConsumers(ERBaseEventType *s);
	ERCommand * getCommand(string, string);
	bool stackContains(ERBaseEventType *, string);
	bool stackIs(ERBaseEventType *, string, int);

protected:
	JNIEnv * env;
	jobject obj;
	string groups;

private:
	string getJsonObjectAttributeValue(string, string);
	string getJsonStringAttributeValue(string, string);
	string getJSONforMap(map<string, string>);
	string getJSONforEvent(ERBaseEventType *);
	ERBaseEventType * parseJSON(string);
	map<string, string> parseJSONtoMap(string json);
	vector<string> split(string, string);
};

#endif /* JAVAADAPTER_H_ */
