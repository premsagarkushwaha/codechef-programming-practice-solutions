/*
update
Chef wants to impress Chefina by giving her the maximum number of gifts possible.

Chef is in a gift shop having NN items where the cost of the ithith item is equal to AiAi. Chef has KK amount of money and a 50%50% off discount coupon that he can use for at most one of the items he buys.

If the cost of an item is equal to XX, then, after applying the coupon on that item, Chef only has to pay ⌈X2⌉⌈X2⌉ (rounded up to the nearest integer) amount for that item.

Help Chef find the maximum number of items he can buy with KK amount of money and a 50%50% discount coupon given that he can use the coupon on at most one item.

Input Format
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains two space-separated integers NN and KK.
The next line contains NN space-separated integers, where the ithith integer AiAi denotes the cost of the ithith item.
Output Format
For each test case, print a single line containing one integer ― the maximum number of items Chef can buy.

Constraints
1≤T≤1031≤T≤103
1≤N≤1051≤N≤105
1≤Ai≤1091≤Ai≤109
0≤K≤1090≤K≤109
Sum of NN over all test cases does not exceed 2⋅1052⋅105.
Sample Input 1 
3
1 4
5
3 15
4 4 5
3 10
6 7 4
Sample Output 1 
1
3
2
Explanation
Test case 11: After applying the discount, Chef can buy the only available item at ⌈52⌉=3⌈52⌉=3.

Test case 22: Chef can buy all three items even without using the coupon.

Test case 33: After applying coupon on the third item, Chef can buy the second and the third item at 7+⌈42⌉=7+⌈42⌉= 7+2=97+2=9.
It is not possible for Chef to buy more than two items.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--)
	{
	    int n,k;cin>>n>>k;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        
	    }
	    sort(arr, arr + n);
	    int cs=0;
	    int it=0;
	    int max=k;
	    
	    for(int j=0;j<n;j++)
	    {
	        if(cs+arr[j]<max)
	        {
	            it++;
	            cs = cs+arr[j];
	        }
	        else
	        {
	            if(arr[j]%2==1)
	            {
	                if(cs+(arr[j]/2)+1<=max)
        	        {
        	            it++;
        	            cs = cs+(arr[j]/2)+1;
        	            break;
        	        }
	            }
	            else if(arr[j]%2==0)
	            {
	                if(cs+(arr[j]/2)<=max)
        	        {
        	            it++;
        	            cs = cs+(arr[j]/2);
        	            break;
        	        }
	            }
	        }
	    }
	    cout<<it<<"\n";
	}
	return 0;
}
