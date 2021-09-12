//Q.1 WAP using generic function to find sum of 2 numbers.
#include<iostream>
using namespace std;

template<class T>add(T &a, T &b)
{
	T sum = a+b;
	return sum;
}
int main()
{
	int i ,j;
	float m,n ;
	cout<<"Enter the value of i,j,m,n";
	cin>>i>>j>>m>>n;
	cout<<"\n Additon of i and j is :"<<add(i,j);
	
	cout<<"\n Addition of m and n is : "<<add(m,n);
	return 0;
}
