#include "stdafx.h"
#include "iostream"

using namespace std;

void patternFun(int);

void main()
{
	int n;
	cout<<"Enter no of rows\n";
	cin>>n;
	patternFun(n);
}

void patternFun(int n)
{
	int i, j;
	int count =1;
	for(i =1;i<=n;i++)
	{
		if(i%2 == 0)
		{
			count++;
			cout<<count;
		}

		for(j=1;j<=n;j++)
		{
			cout<<i;
		}

		if(i%2 != 0)
		{
			count++;
			cout<<count;
		}
		cout<<"\n";
	}
}


