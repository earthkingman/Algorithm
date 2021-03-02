#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    int n,s;
    int i;
    int j;
    int num;
    vector<int>answer;

    i = 0;
    j = 0;
    scanf("%d ", &n);
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {  
        scanf("%d", &num);
        a[i] = num;
    }
    scanf("%d ", &s);
    vector<int>b(s);
    for (int i = 0; i < n; i++)
    {  
        scanf("%d", &num);
        b[i] = num;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    while (1)
    {
        if (i == n || j == s)
            break;
        if (a[i] > b[j])
        {
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            answer.push_back(a[i]);
            i++;
            j++;
        }
    }
    for (int i = 0; i < answer.size(); i++)
    {
        printf("%d ", answer[i]);
    }
    return 0;
}