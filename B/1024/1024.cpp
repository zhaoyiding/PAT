#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string num;
	cin>>num;
	auto pp=find(num.begin(),num.end(),'.');
	auto pe=find(num.begin(),num.end(),'E');
	string sc1(num.begin(),pe);
	string sc2(pp+1,pe);
	string se(pe+1,num.end());
	string sc(num.begin()+1,pp);
	sc+=sc2;
	auto len=sc2.size();
	auto c=stod(sc1);
	auto e=stoi(se);
	
	if(e<0)
	{
		string neg="0.";
		for(int i=-1;i!=e;--i)
			neg+="0";
		sc=neg+sc;
	}
	else if(e>0)
	{
		if(e>len)
		{
			for(int i=0;i!=e-len;++i)
				sc.push_back('0');
		}
		else if(e<len)
		{
			auto p=sc.begin();
			for(int i=0;i!=len;++i)
				++p;
			sc.insert(p,'.');
		}
	}
	else
	{
		sc=string(num.begin()+1,pe);
	}
	if(c<0)
		cout<<'-'<<sc<<endl;
	else
		cout<<sc<<endl;
	return 0;
}
