#include <string>
#include <vector>

using namespace std;

int solution(int n) {

    int result;
    int answer = 0;

    result = (n / 2) + 1;

    for (int i = 1; i < result; i++)
    {
        answer += i * 2;
    }

    return answer;
}