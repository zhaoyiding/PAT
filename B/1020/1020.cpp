#include<iostream>
#include<utility>
#include<iomanip>
#include<vector>
#include<map>
using namespace std;
bool comp(const double &l,const double &r)
{
	return l>r;
}
int main()
{
	int kinds,needs;
	vector<double> stores,tot;
	multimap<double,int,decltype(comp)*> per(comp);
	
	cin>>kinds>>needs;
	for(size_t i=0;i!=kinds;++i)
	{
		double n;
		cin>>n;
		stores.push_back(n);
	}
	for(size_t i=0;i!=kinds;++i)
	{
		double n;
		cin>>n;
		tot.push_back(n);
	}
	for(size_t i=0;i!=kinds;++i)
	{
		double n=tot[i]/stores[i];
		per.insert({n,stores[i]});
	}
	
	double sum=0.0;
	for(auto p=per.begin();p!=per.end();++p)
	{
		auto tp=p->second;
		if(tp>=needs)
		{
			sum+=p->first*needs;
			break;
		}
		else
		{
			sum+=p->first*tp;
			needs-=tp;
		}
	}
	cout<<fixed<<setprecision(2)<<sum<<endl;
	return 0;
}
