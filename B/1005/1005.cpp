#include<iostream>
#include<set>
using namespace std;
bool compare(const int &a,const int &b)
{
	return a>b;
}
int main()
{
	set<int,decltype(compare)*> ist(compare);
	int i,n,k;
	
	cin>>n;
	for(i=0;i!=n;++i)
	{
		cin>>k;
		ist.insert(k);
	}
	
	for(auto p=ist.begin();p!=ist.end();++p)
	{
		auto num=*p;
		while(num!=1)
		{
			if(num%2)
			{
				num=(3*num+1)/2;
			}
			else
			{
				num/=2;
			}
			ist.erase(num);
		}
	}
	
	bool flag=true;
	for(auto &n:ist)
	{
		if(flag)
			flag=false;
		else
			cout<<' ';
		cout<<n;
	}
	
	return 0;
}
