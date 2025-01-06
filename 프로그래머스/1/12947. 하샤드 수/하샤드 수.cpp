#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
    int sum = 0;
    int n = x;  // 원본 값을 유지하기 위해 복사
    
    // 자릿수 합 구하기
    while (n > 0)
    {
        sum += n % 10; // 마지막 자릿수 더하기
        n /= 10;       // 마지막 자릿수 제거
    }
    
    // 하샤드 수 판별
    return x % sum == 0;
}