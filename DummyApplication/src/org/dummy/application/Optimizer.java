package org.dummy.application;

import org.eventreactor.core.elements.ERBaseEventType;

public class Optimizer {

	public static void reconfigure(ERBaseEventType event)
	{
		try{
			System.out.println("Reconfiguring the application....");
			Thread.sleep(6000);
		}catch(Exception exc){
			exc.printStackTrace();
		}
	
	}
}

