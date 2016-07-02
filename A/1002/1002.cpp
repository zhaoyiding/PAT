#include<iostream>
#include<iomanip>
#include<list>
using namespace std;
typedef struct{
	int e;
	double c;
}Node;
int main()
{
	list<Node> l1,l2,res;
	int n1,n2;
	
	cin>>n1;
	for(int i=0;i!=n1;++i)
	{
		Node n;
		cin>>n.e>>n.c;
		l1.push_back(n);
	}
	cin>>n2;
	for(int i=0;i!=n2;++i)
	{
		Node n;
		cin>>n.e>>n.c;
		l2.push_back(n);
	}

	auto p=l1.begin(),q=l2.begin();
	while(p!=l1.end()&&q!=l2.end())
	{
		if(p->e==q->e)
		{
			if(p->c+q->c)
			{
				Node n;
				n.e=p->e;
				n.c=p->c+q->c;
				res.push_back(n);
			}
			++p;
			++q;
		}
		else if(p->e<q->e)
		{
			res.push_back(*q);
			++q;
		}
		else
		{
			res.push_back(*p);
			++p;
		}
	}
	for(;p!=l1.end();++p)
	{
		res.push_back(*p);
	}
	for(;q!=l2.end();++q)
	{
		res.push_back(*q);
	}
	
	bool flag=1;
	if(res.size())
		cout<<res.size()<<' ';
	else
		cout<<res.size();
	for(auto &n:res)
	{
		if(flag)
			flag=0;
		else
			cout<<' ';
		cout<<fixed<<setprecision(1)<<n.e<<' '<<n.c;
	}
	cout<<endl;
	return 0;
}
