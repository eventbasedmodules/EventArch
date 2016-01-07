/*
 * MigrationApp.h
 *
 *  Created on: Aug 20, 2014
 *      Author: stguser
 */
#include <string.h>
#include <cstring>
#include <stdio.h>
#include <iostream>
#include <libvirt/libvirt.h>
using namespace std;

#ifndef MIGRATIONAPP_H_
#define MIGRATIONAPP_H_

class MigrationApp {
public:
	MigrationApp();
	void migrate();
	void userinput();
	void mape();
	void monitoring();
	void analyzing();
	void planning(string serverState);
	void migrating();

};

#endif /* MIGRATIONAPP_H_ */
