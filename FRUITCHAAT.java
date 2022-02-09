/* Chef has closed his restaurant and decided to run a fruit stand instead. His signature dish is a fruit chaat consisting of 22 bananas and 11 apple. He currently has XX bananas and YY apples. How many chaats can he make with the fruits he currently has?

Input Format
The first line will contain TT, the number of testcases. Then the testcases follow.
Each testcase consists of a single line containing two space separated integers - XX and YY
Output Format
For each testcase, output the answer on a new line.

Constraints
1≤T≤1001≤T≤100
0≤X,Y≤1000≤X,Y≤100
Sample Input 1 
3
72 50
38 93
51 4
Sample Output 1 
36
19
4
Explanation
Test Case 11: Chef can make 3636 chaats using 7272 bananas and 3636 apples.

Test Case 22: Chef can make 1919 chaats using 3838 bananas and 1919 apples.

Test Case 33: Chef can make 44 chaats using 88 bananas and 44 apples.*/

/* package codechef; // don't place package name! */

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
		for(int i=0;i<n;i++)
		{
		    int x,y;
		    x = sc.nextInt();
		    y = sc.nextInt();
		    if(y<=x/2)
		    {
		        System.out.println(y);
		    }
		    else{
		        System.out.println(x/2);
		    }
		}
	}
}
