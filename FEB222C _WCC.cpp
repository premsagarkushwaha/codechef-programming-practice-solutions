/*The World Chess Championship 20222022 is about to start. 1414 Classical games will be played between Chef and Carlsen in the championship, where each game has one of three outcomes — it can be won by Carlsen, won by Chef, or it can be a draw. The winner of a game gets 22 points, and the loser gets 00 points. If it’s a draw, both players get 11 point each.

The total prize pool of the championship is 100⋅X100⋅X. At end of the 1414 Classical games, if one player has strictly more points than the other, he is declared the champion and gets 60⋅X60⋅X as his prize money, and the loser gets 40⋅X40⋅X.

If the total points are tied, then the defending champion Carlsen is declared the winner. However, if this happens, the winner gets only 55⋅X55⋅X, and the loser gets 45⋅X45⋅X.

Given the results of all the 1414 games, output the prize money that Carlsen receives.

The results are given as a string of length 1414 consisting of the characters C, N, and D.

C denotes a victory by Carlsen.
N denotes a victory by Chef.
D denotes a draw.
Input Format
The first line of input contains an integer TT, denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains one integer XX, denoting that the total prize pool is 100⋅X100⋅X.
The second line contains the results of the match, as a string of length 1414 containing only the characters C, N, and D.
Output Format
For each test case, output in a single line the total prize money won by Carlsen.

Constraints
1≤T≤10001≤T≤1000
1≤X≤1061≤X≤106
|S|=14|S|=14
SS contains only characters D, C, N.
Subtasks
Subtask #1 (100 points): Original constraints

Sample Input 1 
4
100
CCCCCCCCCCCCCC
400
CDCDCDCDCDCDCD
30
DDCCNNDDDCCNND
1
NNDNNDDDNNDNDN
Sample Output 1 
6000
24000
1650
40
Explanation
Test case 11: Since Carlsen won all the games, he will be crowned the champion and will get 60⋅X60⋅X as the prize money which is 60⋅100=600060⋅100=6000
Test case 22: Carlsen won 77 games and drew 77, so his score is 2⋅7+1⋅7=212⋅7+1⋅7=21. Chef lost 77 games and drew 77, so his score is 0⋅7+1⋅7=70⋅7+1⋅7=7. 
Since Carlsen has more points, he will be crowned the champion and will get 60⋅X60⋅X as the prize money which is 60⋅400=2400060⋅400=24000
Test case 33: Carlsen and Chef both end up with 1414 points. So, Carlsen is declared the winner, but because the points were tied, he receives
55⋅X=55⋅30=165055⋅X=55⋅30=1650 in prize money. */

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int n;cin>>n;
	while(n--)
	{
	    int a;cin>>a;
	    string s;cin>>s;
	    int cl=0,cf=0,d=0,clp,cfp;
	    for(int j=0;j<14;j++)
	    {
	        if(s[j] == 'C')
	        {
	            cl++;
	        }
	        else if(s[j]=='N')
	        {
	            cf++;
	        }
	        else if(s[j]=='D')
	        {
	            d++;
	        }
	    }
	    clp = cl*2+d*1;
	    cfp= cf*2+d*1;
	    if(clp>cfp)
	    {
	        cout<<60*a;
	    }
	    else if(cfp>clp)
	    {
	        cout<<40*a;
	    }
	    else if(clp==cfp)
	    {
	        cout<<55*a;
	    }
	    cout<<"\n";
	}
	return 0;
}
