/*
 * ERBseEventType.cpp
 *
 *  Created on: Aug 20, 2014
 *      Author: stguser
 */

#include "ERBaseEventType.h"

ERBaseEventType::ERBaseEventType() {
	// TODO Auto-generated constructor stub

}

ERBaseEventType::~ERBaseEventType() {
	// TODO Auto-generated destructor stub
}

map<string, string> ERBaseEventType::getStaticContext(){
	return staticContext;
}

map<string, string> ERBaseEventType::getDynamicContext(){
	return dynamicContext;
}

void ERBaseEventType::setStaticContext(map<string, string> nstaticContext){
	staticContext=nstaticContext;
}
void ERBaseEventType::setDynamicContext(map<string, string> ndynamicContext){
	dynamicContext=ndynamicContext;
}

map<string, string> ERBaseEventType::getStaticContextVals(){
	return staticContextVals;
}

map<string, string> ERBaseEventType::getDynamicContextVals(){
	return dynamicContextVals;
}

void ERBaseEventType::setStaticContextVals(map<string, string> nstaticContextVals){
	staticContextVals=nstaticContextVals;
}
void ERBaseEventType::setDynamicContextVals(map<string, string> ndynamicContextVals){
	dynamicContextVals=ndynamicContextVals;
}

void ERBaseEventType::addDynamicContext(string key , string value){
	dynamicContext[key]=value;
}
void ERBaseEventType::addStaticContext(string key , string value){
	staticContext[key]=value;
}

void ERBaseEventType::addDynamicContextVal(string key , string value){
	dynamicContextVals[key]=value;
}
void ERBaseEventType::addStaticContextVal(string key , string value){
	staticContextVals[key]=value;
}

string ERBaseEventType::getDynamicContext(string key){
	//if(dynamicContext.find(key) != dynamicContext.end()){
		return dynamicContext.find(key)->second;
	//} else {
	//	return string();
	//}
}
string ERBaseEventType::getStaticContext(string key){
	//if(staticContext.find(key) != staticContext.end()){
		return staticContext.find(key)->second;
	//} else {
	//	return string();
	//}
}
string ERBaseEventType::getDynamicContextVal(string key){
	if(dynamicContextVals.find(key) != dynamicContextVals.end()){
		return dynamicContextVals.find(key)->second;
	} else {
		return nullString;
	}
}
string ERBaseEventType::getStaticContextVal(string key){
	if(staticContextVals.find(key) != staticContextVals.end()){
		return staticContextVals.find(key)->second;
	} else {
		return nullString;
	}
}

string ERBaseEventType::getType(){
	return type;
}

void ERBaseEventType::setType(string ntype){
	type=ntype;
}
void ERBaseEventType::setBase(string base ){
	base=base;
}

string ERBaseEventType::getEventName(){
	return eventName;
}

void ERBaseEventType::setEventName(string neventName){
	eventName=neventName;
}
