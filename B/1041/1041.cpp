#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
class Stu
{
	friend istream& operator>>(istream &is,Stu &s)
	{
		is>>s.id>>s.a>>s.b;
		if(!is)
			s=Stu();
		return is;
	}
	friend ostream& operator<<(ostream &os,const Stu &s)
	{
		os<<s.id<<' '<<s.b;
		return os;
	}
	friend bool operator==(const Stu &s,int test)
	{
		return s.a==test;
	}
	public:
		int test() const
		{
			return this->a;
		}
	private:
		string id;
		int a,b;
};
int main()
{
	vector<Stu> st;
	int n;
	
	cin>>n;
	for(int i=0;i!=n;++i)
	{
		Stu s;
		cin>>s;
		st.push_back(s);
	}
	
	int m;
	cin>>m;
	for(int i=0;i!=m;++i)
	{
		int k;
		cin>>k;
		auto p=find_if(st.begin(),st.end(),[k](const Stu &s)
		{
			return s.test()==k;
		});
		cout<<*p<<endl;
	}
	return 0;
}
