/*
added
Distinct Binary Strings Problem Code: BINSTRINGSolvedSubmit (Practice)
You are given a binary string SS of length NN.

You have to perform the following operation exactly once:

Select an index ii (1≤i≤N)(1≤i≤N) and delete SiSi from SS. The remaining parts of SS are concatenated in the same order.
How many distinct binary strings of length N−1N−1 can you get after applying this operation?

Input Format
The first line of input contains a single integer TT - the number of test cases. The description of TT test cases follow.
The first line of each test case contains NN - the length of the binary string SS.
The second line contains the binary string SS.
Output Format
For each test case, output the number of distinct binary strings that you can get after applying the operation exactly once.

Constraints
1≤T≤1051≤T≤105
2≤N≤1052≤N≤105
Sum of NN does not exceed 2⋅1052⋅105 over all testcases.
Sample Input 1 
3
3
100
4
1111
5
10110
Sample Output 1 
2
1
4
Explanation
Test Case 1: We have S=100S=100. Now, we can get 0000 (on deleting S1S1), 1010 (on deleting S2S2) and 1010 (on deleting S3S3). Therefore, we can get 22 distinct strings.

Test Case 2: We have S=1111S=1111. Now, we will always get 111111 irrespective of the index ii on which we apply the operation. Therefore, we can get 11 distinct string.*/

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc =new Scanner(System.in);
		int h = sc.nextInt();
		
		//harsh Codechef
		
		for(int i=0;i<h;i++)
		{
		    int lh = sc.nextInt();
		    String sh = sc.next();
		    String[] strSplit = sh.split("");
		    /* ArrayList<String> strList = new ArrayList<String>(Arrays.asList(strSplit));*/
		    String current= "2";
		    int count=0;
		    for(int j=0;j<lh;j++)
		    {
		        if(current.equals(strSplit[j])== false)
		        {
		            
		            count++;
		            current =strSplit[j];
		            
		            
		        }
		        
		    }
		    System.out.println(count);
		}
	}
}
