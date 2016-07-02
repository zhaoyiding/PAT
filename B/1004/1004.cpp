#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
class Student
{
	friend istream& operator>>(istream &is,Student &s);
	friend ostream& operator<<(ostream &os,const Student &s);
	friend bool operator<(const Student &l,const Student &r);
	private:
		string name="";
		string num="";
		int grade=0;
};
istream& operator>>(istream &is,Student &s)
{
	is>>s.name>>s.num>>s.grade;
	if(!is)
		s=Student();
	return is;	
}
ostream& operator<<(ostream &os,const Student &s)
{
	os<<s.name<<' '<<s.num;
	return os;
}
bool operator<(const Student &l,const Student &r)
{
	return l.grade<r.grade;
}
int main()
{
	vector<Student> sv;
	int i,n;
	
	cin>>n;
	for(i=0;i!=n;++i)
	{
		Student s;
		cin>>s;
		sv.push_back(s);
	}
	sort(sv.begin(),sv.end());
	cout<<sv.back()<<endl;
	cout<<sv.front()<<endl;
	return 0;
}
