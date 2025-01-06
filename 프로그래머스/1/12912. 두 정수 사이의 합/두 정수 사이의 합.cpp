#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) 
{
    long long answer = 0; 
    
    // a와 b 비교
    int minValue = min(a, b); // 더 작은 값
    int maxValue = max(a, b); // 더 큰 값
    
    // 작은 값부터 큰 값까지 반복하며 합산
    for (int i = minValue; i <= maxValue; i++)
    {
        answer += i; // 현재 숫자를 결과에 더함
    }
    
    return answer;
}
