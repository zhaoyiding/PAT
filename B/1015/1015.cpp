#include<iostream>
#include<set>
#include<string>
using namespace std;
class Stud
{
	friend ostream& operator<<(ostream &os,const Stud &s)
	{
		 os<<s.isbn<<' '<<s.v<<' '<<s.i;
		 return os;
	}
	friend bool operator<(const Stud &l,const Stud &r)
	{
		if(l.sum!=r.sum)
			return l.sum<r.sum;
		else
		{
			if(l.v!=r.v)
				return l.v<r.v;
			else
				return l.isbn>r.isbn;
		}
	}
	friend bool operator==(const Stud &l,const Stud &r)
	{
		return l.isbn==r.isbn&&l.v==r.v&&l.i==r.i;
	}
	public:
		Stud(string &s,int vt,int it):
			isbn(s),v(vt),i(it)
			{
				sum=v+i;
			}
	private:
		string isbn;
		int v,i,sum;
};
int main()
{
	set<Stud> st1,st2,st3,st4;
	int n,low,high;
	
	cin>>n>>low>>high;
	for(int k=0;k!=n;++k)
	{
		string s;
		int v,i;
		cin>>s>>v>>i;
		if(v>=low&&i>=low)
		{
			Stud tp(s,v,i);
			if(v>=high&&i>=high)
				st1.insert(tp);
			else if(v>=high&&i<high)
				st2.insert(tp);
			else if(v<high&&i<high&&v>=i)
				st3.insert(tp);
			else
				st4.insert(tp);
		}	
	}
	
	cout<<(st1.size()+st2.size()+st3.size()+st4.size())<<endl;
	if(!st1.empty())
	{
		for(auto p=st1.crbegin();p!=st1.crend();++p)
			cout<<*p<<endl;
	}
	if(!st2.empty())
	{
		for(auto p=st2.crbegin();p!=st2.crend();++p)
			cout<<*p<<endl;	
	}
	if(!st3.empty())
	{
		for(auto p=st3.crbegin();p!=st3.crend();++p)
			cout<<*p<<endl;
	}
	if(!st4.empty()) 
	{
		for(auto p=st4.crbegin();p!=st4.crend();++p)
			cout<<*p<<endl;
	}
	
	return 0;
}
