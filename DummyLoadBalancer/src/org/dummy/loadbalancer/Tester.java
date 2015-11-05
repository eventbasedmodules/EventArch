package org.dummy.loadbalancer;

import java.io.Console;


public class Tester {

	public static void main(String [] args) throws InterruptedException {
		 Console console = System.console();
	        if (console == null) {
	            System.out.println("Unable to fetch console");
	            return;
	        }
		while (true)
		{
	        System.out.println("Ready to continue with the under-utilized scenario? (Y/N) ");
	        String line = console.readLine();
	        if (line.equalsIgnoreCase("y"))
	        {
	        	new MigrationPlanner().plan("UnderUtilized");
	        	new Migrator().migrate();
	        }
	        else{
		        	System.out.println("Ready to continue with the over-utilized scenario? (Y/N) ");
		        	line = console.readLine();
		        	if (line.equalsIgnoreCase("y"))
		        	{
		        		new MigrationPlanner().plan("OverUtilized");
		        		new Migrator().migrate();
		        	}
		        	else
		        		System.exit(0);
	        	}		
		
		}
	}
}
