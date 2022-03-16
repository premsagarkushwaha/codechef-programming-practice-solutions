/*
Chef is working on his swap-based sorting algorithm for strings.

Given a string SS of length NN, he wants to know whether he can sort the string using his algorithm.

According to the algorithm, one can perform the following operation on string SS any number of times:

Choose some index ii (1≤i≤N)(1≤i≤N) and swap the ithith character from the front and the ithith character from the back.
More formally, choose an index ii and swap SiSi and S(N+1−i)S(N+1−i).
For example, d––cba––d_cba_ can be converted to a––cbd––a_cbd_ using one operation where i=1i=1.

Help Chef find if it is possible to sort the string using any (possibly zero) number of operations.

Input Format
The first line of the input contains a single integer TT, denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains NN, the length of the string.
The second line contains a string SS of length NN consisting of lowercase letters of the Latin alphabet.
Output Format
For each test case, print YESYES if it is possible to sort the string by performing any number of operations. Otherwise, print NONO.

You may print each character of the string in uppercase or lowercase (for example, the strings YeSYeS, yEsyEs, yesyes and YESYES will all be treated as identical).

Constraints
1≤T≤1001≤T≤100
1≤N≤1031≤N≤103
Sum of NN over all test cases does not exceed 2⋅1032⋅103.
SS consists of lowercase Latin alphabets only.
Sample Input 1 
3
4
dbca
3
ccc
3
bza
Sample Output 1 
YES
YES
NO
Explanation
Test case 11: Chef can sort the string using 11 operation.

Choose i=1i=1 and swap S1=dS1=d and S4=aS4=a. This way, the string becomes abcdabcd.
Hence, the string is sorted.

Test case 22: Chef needs 00 operations to sort this string as it is already sorted.

Test case 33: It can be proven that the given string cannot be sorted using any number of operations.
*/



/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static boolean issort(String s, int n)
    {
        for(int i=1;i<n;i++)
        {
            if(s.charAt(i)<s.charAt(i-1))
            {
                return false;
            }
        }
        return true;
    }
    static String swap(String str, int i, int j)
    {
        char ch[] = str.toCharArray();
        char temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
        String string = new String(ch);
        return string;
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int i=0;i<t;i++)
		{
		    int n= sc.nextInt();
		    String s = sc.next();
		    if(issort(s, n))
		    {
		        System.out.println("YES");
		    }
		    else
		    {
		        
		        int c=0, m=0;
		        for(int j=0; j<n;j++)
		        {
		            m++;
		            if(s.charAt(j)>s.charAt(n-1-j))
		            {
		                s = swap(s ,j, n-1-j );
		            }
		          //  s = swap(s ,j, n-1-j );
		            if(issort(s, n))
        		    {
        		        c++;
        		        break;
        		    }
        		    
		        }
		        if(c>0) 
		        {
		             System.out.println("YES");
		        }
		       
		        else 
		        System.out.println("NO");
		        
		    }
		    
		}
	}
}

