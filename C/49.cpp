#include <vector>
#include <iostream>

using namespace std;

int answer_matrix[10][10];
int front_matrix[10][10];
int rigth_matrix[10][10];

int main()
{
    int n;
    int temp;
    int answer = 0;

    cin >> n;
    for (int j = 0; j < n; j++)
    {
        cin >> temp;
        for (int i = 0; i < n; i++)
        {
            front_matrix[i][j] = temp;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cin >> temp;
        for (int j = 0; j < n; j++)
        {
            rigth_matrix[i][j] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (front_matrix[i][j] >= rigth_matrix[i][j])
                answer_matrix[i][j] = rigth_matrix[i][j];
            else
                answer_matrix[i][j] = front_matrix[i][j];
            answer += answer_matrix[i][j];
        }
    }
    cout << answer;
    return (0);
}