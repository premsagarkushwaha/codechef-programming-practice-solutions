/*  Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line
*/



#include <iostream>
using namespace std;

int reverse(int a)
	{
	    int remainders,sum=0;
        while (a != 0) {
        remainders = a % 10;
        sum = sum * 10 + remainders;
        a /= 10;
        
       
	    }
	    return sum;
	}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i =0; i<n;i++)
	{
	    int t;
	    cin>>t;
	    int a = reverse(t);
	    arr[i]=a;
	}
	for(int i =0; i<n;i++)
	{
	    cout<< arr[i]<<"\n";
	}
	return 0;
}
