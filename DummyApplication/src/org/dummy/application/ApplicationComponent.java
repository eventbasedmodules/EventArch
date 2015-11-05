package org.dummy.application;

public class ApplicationComponent {

	public void getEvent(String arg, String attribute)
	{
		System.out.println("Event is recieved "+ attribute +" by Dummy Application");
	}
	public void publishEventLocal()
	{
		System.out.println("Event is locally published from Dummy Application");
	}
	public void publishEventGlobal()
	{
		System.out.println("Event is locally published from Dummy Application");
	}
	public void execute()
	{
		System.out.println("Application component is executing....");
	}

}

