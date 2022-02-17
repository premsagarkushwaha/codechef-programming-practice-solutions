/*ATM Problem |Code: HS08TEST
Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, 
  and Pooja's account balance has enough cash to perform the 
  withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.
  
  Example - Successful Transaction
Input:
30 120.00

Output:
89.50
edit
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a;
	float b;
	std::cin >> a>>b;
	if(a%5==0&&(a+0.5)<=b)
	{
	    float z;
	    z = b-a-0.5;
	    
	    cout<<setprecision(2)<<fixed<<z;
	}
	else
	{
	    cout<<b;
	}
}
