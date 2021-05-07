#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int count = 0;
    int i = 0;
    ㅍㄷ
    while (!progresses.empty())
    {
        for (i = 0; i < progresses.size(); i++)
        {
            progresses[i] = progresses[i] + speeds[i];
            cout << progresses[i];
        }
        while (progresses.front() >= 100)
        {
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
            count++;
        }
        answer.push_back(count);
        count = 0;
    }
    return answer;
}

int main()
{
    int a;
    solution([93, 30, 55],[1, 30, 5]);
    return 0;
}