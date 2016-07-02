#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> iv;
	int n;
	
	cin>>n;
	for(int i=0;i!=n;++i)
	{
		int k;
		cin>>k;
		iv.push_back(k);
	}
	
	int this_sum=0,max_sum=0,begin,end,tbeg;
	bool flag=1,flag_zero=0;
	for(auto n:iv)
	{
		if(n==0)
			flag_zero=1;
		if(n>0&&flag)
		{
			tbeg=n;
			flag=0;
		}
		this_sum+=n;
		if(this_sum<0)
		{
			this_sum=0;
			flag=1;
		}
		if(this_sum>max_sum)
		{
			max_sum=this_sum;
			begin=tbeg;
			end=n;
		}
	}
	if(max_sum)
		cout<<max_sum<<' '<<begin<<' '<<end<<endl;
	else
	{
		if(flag_zero)
			cout<<0<<' '<<0<<' '<<0<<endl;
		else
			cout<<0<<' '<<iv.front()<<' '<<iv.back()<<endl;
	}	
	return 0;
}
