package org.dummy.loadbalancer;

public class Migrator {

	public void migrate()
	{
		try{
			System.out.println("Migrating VMs ...");
			Thread.sleep(6000);
		}catch(Exception exc){
			exc.printStackTrace();
		}
	}
}
