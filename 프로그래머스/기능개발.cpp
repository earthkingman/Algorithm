#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int count = 0;
    int i = 0;

    while (!progresses.empty())
    {
        for (i = 0; i < progresses.size(); i++)
        {
            progresses[i] = progresses[i] + speeds[i];
            cout << progresses[i] << " ";
        }
        cout << "\n";
        while (progresses.size() > 0 && progresses.front() >= 100)
        {
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
            count++;
        }
        if (count > 0)
        {
            answer.push_back(count);
        }
        count = 0;
    }
    return answer;
}