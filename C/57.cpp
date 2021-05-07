#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int>now_pos(2);
vector<int>R_pos = {3, 0};
vector<int>L_pos = {3, 2};


vector<int> checking (int n)
{   
    int list[4][3] = { {1,2,3}, { 4,5,6}, {7,8,9}, {10,0,11}};
    vector<int> pos(2);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (list[i][j] == n)
            {
                pos[0] = i;
                pos[1] = j;
            }
        }        
    }
    return (pos);
}

string check_length(string hand, int n)
{
    string str;
    int R_length = 0;
    int L_length = 0;
    
    R_length = abs(R_pos[0] - now_pos[0]) +  abs(R_pos[1] - now_pos[1]);
    L_length = abs(L_pos[0] - now_pos[0]) +  abs(L_pos[1] - now_pos[1]);
    if (R_length > L_length)
    {
        L_pos = checking(n);
        return ("L");
    }
    else if (R_length < L_length)
    {
        R_pos = checking(n);
        return ("R");
    }
    if (hand == "right")
    {
        R_pos = checking(n);
            return ("R");
    }
    else if (hand == "left")
    {
        L_pos = checking(n);
            return ("L");
    }
    return "";
}

string solution(vector<int> numbers, string hand) {
    string answer = "";

    for(int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
        {
            answer += "L";
            L_pos = checking(numbers[i]);
        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
        {
            answer += "R";
            R_pos = checking(numbers[i]);
        }
        else
        {
             now_pos = checking(numbers[i]);
             answer += check_length(hand, numbers[i]);
        }
    }
    cout  <<answer;
    return answer;
}