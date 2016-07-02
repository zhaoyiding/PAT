#include<iostream>
#include<vector>
#include<forward_list>
using namespace std;
int main()
{
	forward_list<int> ifl;
	vector<int> iv;
	
	for(size_t i=0;i!=10;++i)
	{
		int n;
		cin>>n;
		iv.push_back(n);
	}
	auto p=ifl.before_begin();
	for(size_t i=1;i!=10;++i)
	{
		for(int k=0;k!=iv[i];++k)
			p=ifl.insert_after(p,i);
	}
	for(int i=0;i!=iv[0];++i)
		ifl.insert_after(ifl.begin(),0);
		
	for(auto i:ifl)
		cout<<i;
	cout<<endl;
	return 0;
}
