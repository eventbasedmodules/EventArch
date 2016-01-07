package org.dummy.loadbalancer;

public class MigrationPlanner {

	public void plan(String load)
	{
		
		try{
			System.out.println("Planning started for the load " + load +"...");
//			Thread.sleep(6000);
		}catch(Exception exc){
			exc.printStackTrace();
		}
	}
}
//
//before	execution (void MigrationPlanner.plan(String load)) 
//before execution (void MigrationPlanner.plan(String load)) 
//ConstituentState e_EndLB := after execution (void Migrator.migrate(..)){ 
