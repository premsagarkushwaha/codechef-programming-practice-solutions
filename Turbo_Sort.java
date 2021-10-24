/*  Given the list of numbers, you are to sort them in non decreasing order.
Input
t – the number of numbers in list, then t lines follow [t <= 10^6].
Each line contains one integer: N [0 <= N <= 10^6]

Output
Output given numbers in non decreasing order.
*/
import java.util.*;
class Codechef
{
	public static void main (String[] args) 
	{
	    ArrayList<Integer> list = new ArrayList<>();
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i = 0; i<n ;i++)
		{
		    int a = sc.nextInt();
		    list.add(a);
		}
		Collections.sort(list);
		for(int r=0;r<list.size();r++)
		{
		    System.out.println(list.get(r));
		}
	}
}
