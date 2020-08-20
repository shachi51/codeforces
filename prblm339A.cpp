#include<stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int a[100]={0};
	int j=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='+')
		{
			a[j]=s[i]-'0';
			j++;
		}
	}
	sort(a,a+j);
	cout<<a[0];
	for(int i=1;i<j;i++)
	cout<<"+"<<a[i];
	return 0;
	
}
