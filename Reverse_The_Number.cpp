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
