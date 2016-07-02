#include<iostream>
#include<algorithm>
#include<list>
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
	public:
		Stud(const string &s="",int vt=0,int it=0):
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
	list<Stud> st1,st2,st3,st4;
	int n,low,high,ct=0;
	
	cin>>n>>low>>high;
	for(int k=0;k!=n;++k)
	{
		string s;
		int v,i;
		cin>>s>>v>>i;
		if(v>=low&&i>=low)
		{
			++ct;
			Stud tp(s,v,i);
			if(v>=high&&i>=high)
				st1.push_back(tp);
			else if(v>=high&&i<high)
				st2.push_back(tp);
			else if(v<high&&i<high&&v>=i)
				st3.push_back(tp);
			else
				st4.push_back(tp);
		}	
	}
	
	st1.sort();
	st2.sort();
	st3.sort();
	st4.sort();
	
	cout<<ct<<endl;
	for(auto p=st1.crbegin();p!=st1.crend();++p)
	{
		cout<<*p<<endl;
	}		
	for(auto p=st2.crbegin();p!=st2.crend();++p)
	{
		cout<<*p<<endl;	
	}		
	for(auto p=st3.crbegin();p!=st3.crend();++p)
	{
		cout<<*p<<endl;
	}		
	for(auto p=st4.crbegin();p!=st4.crend();++p)
	{
		cout<<*p<<endl;
	}		
	
	return 0;
}
