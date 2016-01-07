package org.dummy.application;

import java.io.BufferedReader;
import java.io.Console;
import java.io.FileReader;

public class Tester {

	public static void main (String[] args) {

	 Console console = System.console();
        if (console == null) {
            System.out.println("Unable to fetch console");
            return;
        }
	    System.out.println("Ready to continue adaptive software? (Y/N) ");
        String answer = console.readLine();
        if (!answer.equalsIgnoreCase("y"))
        	System.exit(0);

		try (BufferedReader  br = new BufferedReader(new FileReader("WorkLoad.txt"))) {
			

			// we need to read request lines, parse it and invoke the application accordingly...
			String line = br.readLine();
			while (line != null) {
				new ApplicationComponent().execute();
				line = br.readLine();
				Thread.sleep(6000);

			}
//			 Console console = System.console();
//		        if (console == null) {
//		            System.out.println("Unable to fetch console");
//		            return;
//		        }
//			while (true)
//			{
//		        System.out.println("Ready to continue adaptive software? (Y/N) ");
//		        String line = console.readLine();
//		        if (line.equalsIgnoreCase("y"))
//		        	new ApplicationComponent().execute();
//		        else 
		        	System.exit(0);
//			}   
		}catch (Exception exc){
			exc.printStackTrace();
		}
	
	}
}

