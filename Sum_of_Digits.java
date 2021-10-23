/*You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, calculate the sum of digits of N, and display it in a new line.



 package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		List<Integer> li = new ArrayList<Integer>();
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		for(int i = 0;i<n;i++)
		{
		    
		    int ns = sc.nextInt();
		    String s = Integer.toString(ns);
		    int sum = 0;
		    for(int j =0; j<s.length();j++)
		    {
		        char b = s.charAt(j);
		        int a=Integer.parseInt(String.valueOf(b));
		        sum = sum+a;
		        
		    }
		    li.add(sum);
		    
		}
		for(int i = 0;i<n;i++)
		{
		    System.out.println(li.get(i));
		}
		    
		}
	}

