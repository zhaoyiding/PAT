#include<iostream>
#include<string>
#include<set>
using namespace std;
class Act
{
	friend ostream& operator<<(ostream &os,const Act &tp)
	{
		os<<tp.c;
		return os;
	}
	friend bool operator<(const Act &l,const Act &r)
	{
		if(l.ct!=r.ct)
			return l.ct<r.ct;
		else
			return l.c>r.c;
	}
	public:
		Act(char ch,int i):
			c(ch),ct(i){}
		Act& operator++()
		{
			++ct;
			return *this;
		}
	private:
		char c;
		int ct;
};
int main()
{
	int awin=0,adraw=0,alose=0,bwin=0,bdraw=0,blose=0;
	int n;
	Act ac('C',0),aj('J',0),ab('B',0),bc('C',0),bj('J',0),bb('B',0);
	string s;
	
	cin>>n;
	getline(cin,s);
	for(int i=0;i!=n;++i)
	{
		getline(cin,s);
		if(s=="C J")
		{
			++awin;
			++blose;
			++ac;
		}
		else if(s=="C B")
		{
			++alose;
			++bwin;
			++bb;
		}
		else if(s=="C C")
		{
			++adraw;
			++bdraw;
		}
		else if(s=="J C")
		{
			++alose;
			++bwin;
			++bc;
		}
		else if(s=="J B")
		{
			++awin;
			++blose;
			++aj;
		}
		else if(s=="J J")
		{
			++adraw;
			++bdraw;
		}
		else if(s=="B C")
		{
			++awin;
			++blose;
			++ab;
		}
		else if(s=="B J")
		{
			++alose;
			++bwin;
			++bj;
		}
		else if(s=="B B")
		{
			++adraw;
			++bdraw;
		}
	}
	
	set<Act> aw{ac,aj,ab},bw{bc,bj,bb};
	
	cout<<awin<<' '<<adraw<<' '<<alose<<endl;
	cout<<bwin<<' '<<bdraw<<' '<<blose<<endl;
	cout<<*(aw.crbegin())<<' '<<*(bw.crbegin())<<endl;
	
	return 0;
}
