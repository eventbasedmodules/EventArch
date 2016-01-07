# EventArch
The distributions of the EventArch architectural description language

### Requirements ###

AspectJ, AspectC++ installations are on $PATH
ActiveMQ is installed and started

### Projects ###

+	DummyApplication and DummyLoadBalancer are mock Java applications. 

+	EventArchTester is a Java project that compiler specifications and generates executable files. In this project:

	- The folder "application" contains all applications; Migration.cpp is an application that performs VM migration 
  -	The folder "libs" contains all the required libraries for these applications.
  -	The file "testerconfiguration.xml" defines necessary information about the applications, the specification files, etc. Make sure you adjust the specidied paths in this file.
  -	The files "*.er" contain the specification of architectural event modules
  -	The file "information.ser" contains the serialized information about the compiled specifications. It is generated during the compilation program.

+	The folder "libraries" contains all the required libraries for executing EventArch programs. This also include the jar  files of the EventArch language.

+	The EventArch language is developed using XText framework. One can insert the generated jar files "org.eventreactor.language.*" from "libraries" folder into the plugin directory of Eclipse to benefit form an editor for EventArch.


### Executing the Projects ###

+	The specifications must be compiled via "EventArchCompiler.jar"; an example code to compile the specifications resides in EventArchTester project. The compilation results in generating classes and jar files for each architectural event module.

+	ActiveMQ must be started.

+	Each architectural event module must be executed in a separate terminal.

+	The following command can be used to execute State machine-based modules: 
   - java -cp .;../libraries/*; SwitchCoordinator_swt config=testerconfiguration.xml

+	The following command can be used to execute Java or CPP event modules:
	 - java -cp .;../libraries/*;DummyLoadBalancer.jar; WrappedLoadBalancer_lb config=testerconfiguration.xml

	 - Note that in this command, "WrappedLoadBalancer_lb" refers to the module named as "WrappedLoadBalancer" defined in "eventmodules.er" for which an instance named as "lb" is defined within the "initialize.er" file. This is the default naming scheme in the EventArch language. 

### Note ###

+ The EventArch language was originally named as EventReactor, as it had synergies with the EventReactor programming language developed by the same author. To avoid confusions, it was later on renamed.

+ The EventArch language is being frequently updated with more features and compiler checks. The new versions will be uploaded as we proceed.

+ For more information please contact: eventbasedmodules@gmail.com 
