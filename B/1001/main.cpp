#include<iostream>
using namespace std;
int main()
{
	int n,ct=0;
	
	cin>>n;
	
	if(n!=1)//�տ�ʼn����1
	{
		do
		{
			if(n%2)//����
				n=(3*n+1)/2;
			else
				n/=2;
			++ct; 
		}while(n!=1);
	}
	cout<<ct<<endl;
	return 0;
}
