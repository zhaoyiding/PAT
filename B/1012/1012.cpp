#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> a1,a2,a3,a4,a5;
	int n,k;
	
	cin>>n;
	for(int i=0;i!=n;++i)
	{
		cin>>k;
		switch(k%5)
		{
			case 0:
				a1.push_back(k);
				break;
			case 1:
				a2.push_back(k);
				break;
			case 2:
				a3.push_back(k);
				break;
			case 3:
				a4.push_back(k);
				break;
			case 4:
				a5.push_back(k);
				break;
		}
	}
	
	int res1=0;
	for(auto i:a1)
	{
		if(i%2==0)
			res1+=i;
	}
	if(res1)
		cout<<res1;
	else
		cout<<"N";
	
	
	
	int res2=0,ct=0;
	for(auto i:a2)
	{
		if(ct++%2)
			res2-=i;
		else
			res2+=i;
	}
	if(a2.empty())
		cout<<" N";
	else
		cout<<' '<<res2;
	
		
	if(a3.empty())
		cout<<" N";
	else
		cout<<' '<<a3.size();
	
	
	double res4=0.0;
	for(auto d:a4)
	{
		res4+=d;
	}
	if(a4.empty())
		cout<<" N";
	else
		cout<<' '<<fixed<<setprecision(1)<<res4/a4.size();
		
	
	if(a5.empty())
		cout<<" N";
	else
	{
		auto res5=max_element(a5.begin(),a5.end());
		cout<<' '<<*res5;
	}
	
	return 0;
}
