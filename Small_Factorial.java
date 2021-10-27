/* 
Small Factorial Problem Code: FLOW018SolvedSubmit
Write a program to find the factorial value of any number entered by the user.

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains an integer N.

Output
For each test case, display the factorial of the given number N in a new line

Example
Input
3 
3 
4
5

Output

6
24
120


*/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		ArrayList<Integer> list = new ArrayList<>();
		int f =1;
		for(int i=0;i<n;i++)
		{
		    int a = sc.nextInt();
		    for(int k=1;k<=a;k++)
		    {
		        f=f*k;
		        
		    }
		    //list.add(f);
		    System.out.println(f);
		    f=1;
		    
		    
		}
		
	}
}
