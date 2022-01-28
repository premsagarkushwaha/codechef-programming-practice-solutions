/*In a college named Dr.Babasaheb Ambedkar Technological university, Lonere, new first-year admissions took place. 
Now each class has one class representative. Many students were interested to be class representative. So the Head of Department came up with an idea to hold elections.
Students have to cast their votes by the name of the candidate they choose. Consider Names of candidates to be represented as numbers. 
Given an arr[i] Which represents votes cast by all students. print the number denoted as the name of the candidate who wins the election.
One who got strictly more than half the votes will be considered as the winner of the election and will become the Class representative. 
If no candidate gets more than half the votes print "NOTA"

input:-
First line will contain TT, number of testcases. Then the testcases follow.
Each testcase contains of a two line of input, integers N , Size of the array.
Followed by an array of integers arr of size N.
sample input:-
1
6
1 1 1 1 2 2


output:-
For each testcase, output in a single line answer name of the candidate who is winner.

sample output :-
1


*/

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.HashMap;
import java.util.Map.Entry;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		for(int i=0;i<n;i++)
		{
		    int s = sc.nextInt();
		    Map <Integer, Integer> mp = new HashMap();
		    
		    for(int j=0; j<s;j++)
		    {
		        int temp = sc.nextInt();
		        if(mp.containsKey(temp))
		        {
		            mp.put(temp, mp.get(temp)+1);
		        }
		        else
		        {
		            mp.put(temp,1);
		        }
		    }
		    int mx = (Collections.max(mp.values()));
		    if(mx>(s/2))
		    {
		        for(Entry<Integer, Integer> entry: mp.entrySet())
		        {
                  if(entry.getValue() == mx) {
                    System.out.println(entry.getKey());
                    break;
                  }
                }
		        
		    }
		    else
		    {
		        System.out.println("NOTA");
		    }
		    
		}
		
	}
}


