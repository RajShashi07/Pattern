// Pattern1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

void patternFun(int);

void main()
{
	int row;
	cout<<"Enter no of rows\n";
	cin>>row;
	patternFun(row);
}

void patternFun(int row)
{
	int i,j;
	int num = row-1;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<num;
		}
		num++;
		cout<<"\n";
	}

	num -= 2;
	for(i = row-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<num;
		}
		num--;
		cout<<"\n";
	}
}
