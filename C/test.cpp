#include <iostream>
using namespace std;
int main()
{
	string str;
	int n;
	int cnt = 0;
	cin >> n;
	
	while(n--)
	{
		cin >> str;
		cnt = 0;
		for (int i = 0; i < str.length(); i++)
		{
	        if(str[i]=='(') cnt++;
            else if(str[i]==')') cnt--;
            if(cnt<0) break;
		}
	}
    if(cnt==0) printf("YES\n");
    else printf("NO\n");
	return (0);
}