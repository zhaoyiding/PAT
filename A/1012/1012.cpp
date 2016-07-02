#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
typedef struct{
	string id;
	int c,m,e;
	double a;
}Stu;
typedef struct{
	size_t r;
	char c;
	int w;
}Node;
class Cmp
{
	public:
		Cmp(const string &s):
			id(s){
			}
		bool operator()(const Stu &s) const
		{
			return s.id==id;
		}
	private:
		string id;
};
int main()
{
	vector<Stu> sv,sc,sm,se,sa;
	int n,m;
	
	cin>>n>>m;
	for(int i=0;i!=n;++i)
	{
		Stu s;
		cin>>s.id>>s.c>>s.m>>s.e;
		s.a=(double)(s.c+s.m+s.e)/3;
		sv.push_back(s);
	}
	
	sort(sv.begin(),sv.end(),[](const Stu &l,const Stu &r)->bool {
		if(l.c==r.c)
			return l.id<r.id;
		else
			return l.c>r.c;
	});
	sc=sv;
	
	sort(sv.begin(),sv.end(),[](const Stu &l,const Stu &r)->bool {
		if(l.m==r.m)
			return l.id<r.id;
		else
			return l.m>r.m;
	});
	sm=sv;
	
	sort(sv.begin(),sv.end(),[](const Stu &l,const Stu &r)->bool {
		if(l.e==r.e)
			return l.id<r.id;
		else
			return l.e>r.e;
	});
	se=sv;

	sort(sv.begin(),sv.end(),[](const Stu &l,const Stu &r)->bool {
		if(l.a==r.a)
			return l.id<r.id;
		else
			return l.a>r.a;
	});
	sa=sv;
	
	vector<string> qy;
	for(int i=0;i!=m;++i)
	{
		string id;
		cin>>id;
		qy.push_back(id);
	}
	for(auto t=qy.begin();t!=qy.end();++t)
	{
		Cmp check(*t);
		auto p=find_if(sv.begin(),sv.end(),check);
		if(p==sv.end())
		{
			cout<<"N/A\n";
		}
		else
		{
			vector<Node> nv;
			Node na,nc,nm,ne;
			
			auto pa=find_if(sa.begin(),sa.end(),check);
			size_t ranka=pa-sa.begin();
			na.r=ranka;
			na.c='A';
			na.w=1;
			nv.push_back(na);
			
			
			auto pc=find_if(sc.begin(),sc.end(),check);
			size_t rankc=pc-sc.begin();
			nc.r=rankc;
			nc.c='C';
			nc.w=2;
			nv.push_back(nc);
			
			auto pm=find_if(sm.begin(),sm.end(),check);
			size_t rankm=pm-sm.begin();
			nm.r=rankm;
			nm.c='M';
			nm.w=3;
			nv.push_back(nm);	

			auto pe=find_if(se.begin(),se.end(),check);
			size_t ranke=pe-se.begin();
			ne.r=ranke;
			ne.c='E';
			ne.w=4;
			nv.push_back(ne);
			
			sort(nv.begin(),nv.end(),[](const Node &l,const Node &r)->bool
			{
				if(l.r==r.r)
					return l.w<r.w;
				else
					return l.r<r.r;
			});
			cout<<nv.front().r+1<<' '<<nv.front().c<<endl;			
		}
	}
	return 0;
}
