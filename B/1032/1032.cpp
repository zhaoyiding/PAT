#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> iv(100000);
	int n;
	
	cin>>n;
	for(int i=0;i!=n;++i)
	{
		int k,grade;
		cin>>k>>grade;
		iv[k]+=grade;
	}
	
	int max_i=0,max_grade=0;
	for(int i=1;i<=iv.size();++i)
	{
		if(iv[i]>max_grade)
		{
			max_i=i;
			max_grade=iv[i];
		}
	}
	cout<<max_i<<' '<<max_grade<<endl;
	return 0;
}
