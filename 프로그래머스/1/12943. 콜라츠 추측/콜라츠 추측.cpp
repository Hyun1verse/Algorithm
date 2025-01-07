#include <string>
#include <vector>

using namespace std;

int solution(int num) 
{
    long long n = num; // num을 long long으로 변환
    int count = 0; // 작업 횟수를 저장할 변수

    while (n != 1) // num이 1이 될 때까지 반복
    {
        if (count >= 500) 
        {
            return -1; // 500번 초과 시 -1 반환
        }

        if (n % 2 == 0) 
        {
            n /= 2; // 짝수 처리
        } 
        else 
        {
            n = n * 3 + 1; // 홀수 처리
        }

        count++; // 작업 횟수 증가
    }

    return count; // 1이 될 때까지 걸린 작업 횟수 반환
}
