/* package codechef; // don't place package name!
added */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int p = sc.nextInt();
		for(int i=0;i<p;i++)
		{
		    int n = sc.nextInt();
		    int w = sc.nextInt();
		    ArrayList<Integer> list = new ArrayList<>();
		    for(int j=0;j<n;j++)
		    {
		        int a = sc.nextInt();
		        list.add(a);
		    }
		    Collections.sort(list);
		    int max=0;
		    inner : for(int k=n-1;k>=0;k--)
		    {
		        n--;
		        max=max+list.get(k);
		        
		        if(max>=w)
		        {
		            break inner;
		        }
		    }
		    System.out.println(n);
		}
	}
}
