#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,cur=0,pre=0;
	cin>>n;
	for(int i=0;i!=n;++i)
	{
		cin>>cur;
		if(cur>pre)
		{
			sum+=((cur-pre)*6+5);
		}
		else
		{
			sum+=((pre-cur)*4+5);
		}
		pre=cur;
	} 
	cout<<sum<<endl;
	return 0;
}
