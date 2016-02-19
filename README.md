# EventArch
The distributions of the EventArch architectural description language

### Requirements ###

+ AspectJ, AspectC++ installations are on $PATH

+ ActiveMQ is installed and started

### Projects ###

+ DummyApplication and DummyLoadBalancer are mock Java applications. 

+ EventArchTester is a Java project that compiler specifications and generates executable files. In this project:

	- The folder "application" contains all applications; Migration.cpp is an application that performs VM migration 
  -	The folder "libs" contains all the required libraries for these applications.
  -	The file "configuration.xml" defines necessary information   about the applications, the specification files, etc. Make sure you adjust the specidied paths in this file.
  -	The files "*.er" contain the specification of architectural event modules
  -	The file "information.ser" contains the serialized information about the compiled specifications. It is generated during the compilation program.

  -	The folder "TestCentralized" contains the specifications for the usage of architectural event modules for the centralized pattern.

  -	The folder "TestPeer2Peer" contains the specifications for the usage of architectural event modules for the peer-to-peer pattern.

+ The folder "libraries" contains all the required libraries for executing EventArch programs. This also include the jar  files of the EventArch language.

+ The EventArch language is developed using XText framework. One can insert the generated jar files "org.eventreactor.language.*" from "libraries" folder into the plugin directory of Eclipse to benefit form an editor for EventArch.



### Compiling the Specifications ###

+	The specifications must be compiled via "EventArchCompiler.jar", which is available in the "libraries" folder. An example command is

-  java -jar EventArchCompiler.jar config=../EventArchTester/TestCentralized/configuration.xml

+ Alternatively, it is possible to invoke the compiler from a Java application; an example code to compile the specifications resides in EventArchTester project. The compilation results in generating classes and jar files for each architectural event module.

+ Note: The path to the "configuration.xml" must be adjusted. 


### Executing the Projects ###

+ ActiveMQ must be started.

+ Each architectural event module must be executed in a separate terminal.

+ The following command can be used to execute State machine-based modules: 
   - java -cp .;../libraries/*; SwitchCoordinator_swt config=configuration.xml

+ The following command can be used to execute Java or CPP event modules:
	 - java -cp .;../libraries/*;DummyLoadBalancer.jar; WrappedLoadBalancer_lb config=configuration.xml

+ Note (1): In this command, "WrappedLoadBalancer_lb" refers to the module named as "WrappedLoadBalancer" defined in "eventmodules.er" for which an instance named as "lb" is defined within the "initialize.er" file. This is the default naming scheme in the EventArch language. 

+ Note (2): The path to the "libraries" folder must be adjusted. 

### Notes ###

+ The EventArch language is being frequently updated with more features and compiler checks. The new versions will be uploaded as we proceed.

+ For more information please contact: eventbasedmodules@gmail.com 
