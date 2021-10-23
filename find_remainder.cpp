/*Write a program to find the remainder when an integer A is divided by an integer B.

Input
The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B.

Output
For each test case, find the remainder when A is divided by B, and display it in a new line.*/
#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	int arr[T];
	for(int i = 0;i<T;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    int c = a%b;
	    arr[i]=c;
	    
	}
	for(int i = 0;i<T;i++)
	{
	    cout<<arr[i]<<"\n";
	    
	}

	return 0;
}
