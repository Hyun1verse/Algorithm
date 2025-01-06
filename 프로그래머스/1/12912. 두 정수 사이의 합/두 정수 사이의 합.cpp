#include <algorithm> // min, max 함수 사용
using namespace std;

long long solution(int a, int b) 
{
    long long answer = 0;

    // 반복문에서 min과 max를 직접 사용
    for (int i = min(a, b); i <= max(a, b); i++) 
    {
        answer += i; // i를 계속 더함
    }

    return answer;
}
