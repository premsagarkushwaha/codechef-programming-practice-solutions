/* 
Second Largest Problem Code: FLOW017SolvedSubmit
Three numbers A, B and C are the inputs. Write a program to find second largest among them.

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three integers A, B and C.

Output
For each test case, display the second largest among A, B and C, in a new line

Input
3 
120 11 400
10213 312 10
10 3 450

Output

120
312
10

*/

#include <iostream>
using namespace std;
int large(int a, int b, int c)
{
    if(a>b&&b>c){return b;}
if(b>c&&c>a){return c;}
if(c>b&&b>a){return b;}
if(a>c&&c>b){return c;}
if(b>a&&a>c){return a;}
if(c>a&&a>b){return a;}
    
}

int main() {
	int n;
	cin>>n;
	for (int i;i<n;i++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int l=large(a,b,c);
	    cout<<l<<"\n ";
	}
	return 0;
}


