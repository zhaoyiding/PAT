#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string a,b;
	char da,db;
	
	cin>>a>>da>>b>>db;
	auto na=count(a.begin(),a.end(),da);
	auto nb=count(b.begin(),b.end(),db);
	
	int numa=da-'0';
	long pa;
	if(na)
	{
		pa=numa;
		if(na>1)
		{
			for(int i=0;i!=na-1;++i)
				pa=(pa*10)+numa;
		}
	}
	else
		pa=0;	
	
	int numb=db-'0';
	long pb;
	if(nb)
	{
		pb=numb;
		if(nb>1)
		{
			for(int i=0;i!=nb-1;++i)
				pb=(pb*10)+numb;
		}
	}
	else
		pb=0;
	
	cout<<(pa+pb)<<endl;
	return 0;
}
