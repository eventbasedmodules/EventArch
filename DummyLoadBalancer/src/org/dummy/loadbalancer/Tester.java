package org.dummy.loadbalancer;

import java.io.BufferedReader;
import java.io.Console;
import java.io.FileReader;


public class Tester {

	public static void main(String [] args) {
		 Console console = System.console();
	        if (console == null) {
	            System.out.println("Unable to fetch console");
	            return;
	        }
		    System.out.println("Ready to continue load balancer? (Y/N) ");
	        String answer = console.readLine();
	        if (!answer.equalsIgnoreCase("y"))
	        	System.exit(0);
		
		try (BufferedReader br = new BufferedReader (new FileReader("ServerLoad.txt")))
		{
			String line = br.readLine();
			while (line != null){
				String [] parts = line.split("\\s");
 				if (parts!= null && parts.length == 2) {
					if (new Long(parts[1]) < 30) {
			        	new MigrationPlanner().plan("UnderUtilized");
			        	new Migrator().migrate();	
					}
					else {
						new MigrationPlanner().plan("OverUtilized");
		        		new Migrator().migrate();
					}
 				}
				line = br.readLine();
//				Thread.sleep(6000);
			}
		}catch (Exception exc){
			exc.printStackTrace();
		}
//		 Console console = System.console();
//	        if (console == null) {
//	            System.out.println("Unable to fetch console");
//	            return;
//	        }
//		while (true)
//		{
//	        System.out.println("Ready to continue with the under-utilized scenario? (Y/N) ");
//	        String line = console.readLine();
//	        if (line.equalsIgnoreCase("y"))
//	        {
//	        	new MigrationPlanner().plan("UnderUtilized");
//	        	new Migrator().migrate();
//	        }
//	        else{
//		        	System.out.println("Ready to continue with the over-utilized scenario? (Y/N) ");
//		        	line = console.readLine();
//		        	if (line.equalsIgnoreCase("y"))
//		        	{
//		        		new MigrationPlanner().plan("OverUtilized");
//		        		new Migrator().migrate();
//		        	}
//		        	else
		        		System.exit(0);
//	        	}		
//		
//		}
	}
}
