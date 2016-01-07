package org.dummy.coordinator;

import org.eventreactor.core.elements.ERBaseEventType;

public class CoordinationComponent {

	public static void getEvent(ERBaseEventType attribute)
	{
		System.out.println("Event is recieved "+ attribute +" by Dummy Coordinator "+Thread.currentThread().getId());
		coordinate("proceed");
	}
	public static void coordinate(String cmd)
	{
		System.out.println("Event is published from Dummy Coordinator");
		publishEventGlobal();
	}
	public static void publishEventGlobal()
	{
		System.out.println("Event is locally published from Dummy Coordinator");
	}
	public static void dummy()
	{
		System.out.println("STAAAAAAAAAAAAAAAAARTED ******************"+Thread.currentThread().getId());
	
	}
	public static void main (String[] args) throws InterruptedException
	{
		Thread.currentThread().sleep(10000);
		dummy();
	}
}
