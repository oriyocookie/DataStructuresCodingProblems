//Oriyo Chakma
//SID: 200338214
//assignment 1
//exercise 1.5

#include <iostream>
using namespace std;

int countOnes(int n)
{
    // the formula for finding it is. N/2 + 1(if N is odd)
    if (n>1) // does the recursive function only if n is larger than 1
    {
	if (n%2==0)
	{
	    return countOnes(n/2)+0; // number is even so it adds a 0 
	}
	else
	{
	    return countOnes(n/2)+1; // number is odd so it adds a 1
	}
    }
    return n; 
}
int main()
{
    int x;
    cout << "Enter a positive Integer: ";
    cin >> x;
    while (x<0) // while loop incase the person puts in a negative integer
    {
	cout << "Enter a positive Integer: ";
	cin >>x;
    }
    int numberOnes=countOnes(x); // calls the countOnes function to find the number of ones 
    cout << "There are " << numberOnes << " ones in the binary"<< endl;
    return 0;
}
