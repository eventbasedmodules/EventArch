package org.dummy.application;

import org.eventreactor.core.elements.ERBaseEventType;

public class Optimizer {

	public static void reconfigure(ERBaseEventType event)
	{
		System.out.println("Event is recieved "+ event.getEventName() +" by Dummy Application");
	}
}

