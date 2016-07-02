 #include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<long> iv;
	int n;
	long key;
	
	cin>>n>>key;
	for(int i=0;i!=n;++i)
	{
		long k;
		cin>>k;
		iv.push_back(k);
	}
	sort(iv.begin(),iv.end());
	
	int max=1;
	for(auto p=iv.begin();p!=iv.end();++p)
	{
		if(iv.end()-p<max)
			break;
		for(auto q=p+max;*p*key>=*q&&q!=iv.end();++q)
		{
			auto len=q-p+1;
			if(len>max)
				max=len;
		}
	}
	cout<<max<<endl;
	return 0;
}
