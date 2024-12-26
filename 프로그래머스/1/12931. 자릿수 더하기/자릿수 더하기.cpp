#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int check = 0;

    while (n > 0)
    {
        check = n % 10;
        answer += check;
        n /= 10;
    }

    return answer;
}