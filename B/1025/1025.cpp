#include<iostream>
#include<algorithm>
#include<string> 
#include<vector>
#include<list>
using namespace std;
class Check;
class Node
{
	friend class Check;
	friend istream& operator>>(istream &is,Node &n);
	friend ostream& operator<<(ostream &os,const Node &n);
	public:
		string address,next;
		int num;
};
istream& operator>>(istream &is,Node &n)
{
	is>>n.address>>n.num>>n.next;
	if(!is)
		n=Node();
	return is;
}
ostream& operator<<(ostream &os,const Node &n)
{
	os<<n.address<<' '<<n.num<<' '<<n.next;
	return os;
}
class Check
{
	public:
		bool operator()(const Node &n)
		{
			return n.address==add;
		}
		Check(string &a):add(a){}
	private:
		string add;
};
int main()
{
	string begin;
	int n,k;
	vector<Node> nv;
	list<Node> nl;
	
	cin>>begin>>n>>k;
	for(int i=0;i!=n;++i)
	{
		Node cell;
		cin>>cell;
		nv.push_back(cell);
	}
	
	auto p=find_if(nv.begin(),nv.end(),Check(begin));
	nl.push_back(*p);
	while(p->next!="-1")
	{
		p=find_if(nv.begin(),nv.end(),Check(p->next));
		nl.push_back(*p);
	}
	
	int len=n;
	if(len>=k)
	{
		auto p=nl.begin();
		auto q=p;
		for(int i=0;i!=k-1;++i)
			++q;
			
		for(;len>=k;len-=k)
		{
			reverse(p,q);
			p=++q;
			for(int i=0;i!=k-1;++i)
				++q;
		}
	}
	
	for(auto &n:nl)
		cout<<n<<endl;
	return 0;
}
