//Oriyo Chakma
//SID: 200338214
//Exercise 2.20
//Assignment1

#include <iostream>
#include <stdbool.h>

using namespace std;
bool checkPrime(int n)
{
    if (n==1)
    {
	return false; // 1 is not a prime number
    }
    if (n<=3) 
    {
	return true; // 2 is a prime number
    }
    if (n%2==0 || n%3==0) 
    {
	return false; // if its divisible by 2 or 3 its not prime
    }
    for (int i=5;(i*i)<=n;i+=2) // for loop that divides by different square roots of 3 incremented by 2, as long as it's lower than n
    {
	if (n%i==0)
	{
	    return false; // if the modulas gives 0, it means its divisble 
	}
    }
    return true; // gives the value of prime
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
    bool prime=checkPrime(x); // calls isPrime function putting the value of x

    if (prime)
    {
	cout << x << " is a prime number."<< endl;;
    }
    else
    {
	cout << x << " is not a prime number."<< endl;
    }
    return 0;
}
