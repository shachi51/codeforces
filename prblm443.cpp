#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[1000];
	gets(s);
	int len=strlen(s);
	sort(s,s+len);
	int count=0,i,x=0;
    for(i=0; i<len-1; i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            count++;
            if(s[i]==s[i+1])
                count--;
        }
    }
    cout<<count;
    return 0;
}
	
	

