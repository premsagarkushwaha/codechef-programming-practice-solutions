/*
Chef attempted an exam consisting of NN objective questions. The marking scheme of the exam is:

+3+3 marks for a correct answer.
−1−1 marks for an incorrect answer.
00 marks for an unattempted question.
Find whether it is possible for Chef to score exactly XX marks.

If it is possible, print 33 integers AA, BB, and CC denoting the number of correct answers, incorrect answers and unattempted questions respectively.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers N,XN,X.
Output Format
For each test case, print YESYES if it is possible to score exactly XX marks, otherwise print NONO.

If the answer is YESYES, print 33 integers AA, BB and CC in the next line such that:

0≤A,B,C≤N0≤A,B,C≤N
A+B+C=NA+B+C=N
Chef's total score is exactly XX.
In case of multiple answers, every valid tuple is accepted.

You may print each character of the string in uppercase or lowercase (for example, the strings yEsyEs, yesyes, YesYes and YESYES will all be treated as identical).

Constraints
1≤T≤10001≤T≤1000
1≤N≤1081≤N≤108
0≤X≤3⋅N0≤X≤3⋅N
Sample Input 1 
3
10 30
9 25
8 0
Sample Output 1 
YES
10 0 0
NO
YES
1 3 4
Explanation
Test Case 11: A possible way of scoring 3030 marks in an exam with 1010 questions is: all the 1010 answers are correct. This way the score is 10⋅3=3010⋅3=30. Thus, 
the values of A,B,A,B, and CC are 10,0,10,0, and 00 respectively.

Test Case 22: There is no possible way to score exactly 2525 marks in an exam with 99 questions.

Test Case 33: A possible way of scoring 00 marks in an exam with 88 questions is: 11 answer is correct, 33 answers are wrong and 44 questions are unattempted. 
This way the score is 1⋅3+3⋅(−1)+4⋅0=01⋅3+3⋅(−1)+4⋅0=0. Thus, the values of A,B,A,B, and CC are 1,3,1,3, and 44 respectively.
*/



#include <iostream>
using namespace std;

int main() {
	int n;cin>>n;
	while(n--)
	{
	    int s,p;
	    cin>>s>>p;
	    if(p==0)
	    {
	        cout<<"YES\n";
	        cout<<0<<" "<<0<<" "<<s<<"\n";
	    }
	    else if(p%3==0 and p/3 <= s)
	    {
	        cout<<"YES\n";
	        cout<<p/3<<" "<<0<<" "<<s-p/3<<"\n";
	    }
	    else if(p%3==0 and p/3>s)
	    {
	        cout<<"NO\n";
	    }
	    else if(p%3 !=0)
	    {
	        int op = p/3 +1;
	        if(s<=op)
	        {
	            cout<<"NO\n";
	        }
	        else if(s>op)
	        {
	             if(3*op - p <= (s-op))
	             {
	                 cout<<"YES\n";
	                 cout<<op<<" "<<3*op - p<<" "<<s - op -(3*op - p)<<"\n";
	             }
	             else
	             {
	                 cout<<"NO\n";
	             }
	            
	        }
	    }
	}
	return 0;
}
