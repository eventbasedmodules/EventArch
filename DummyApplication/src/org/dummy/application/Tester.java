package org.dummy.application;

import java.io.Console;

public class Tester {

	public void transcode(){
		System.out.println("Transcoding action....");
	}
	public static void main (String[] args) {
		 Console console = System.console();
	        if (console == null) {
	            System.out.println("Unable to fetch console");
	            return;
	        }
		while (true)
		{
	        System.out.println("Ready to continue adaptive software? (Y/N) ");
	        String line = console.readLine();
	        if (line.equalsIgnoreCase("y"))
	        	new ApplicationComponent().execute();
	        else 
	        	System.exit(0);
		}   
	}
}

