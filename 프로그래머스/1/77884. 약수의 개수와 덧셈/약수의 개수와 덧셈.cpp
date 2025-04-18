#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) 
{
    int answer = 0;

    for (int i = left; i <= right; ++i) 
    {
        int count = 0;
        for (int j = 1; j * j <= i; ++j) 
        {
            if (i % j == 0) 
            {
                count += (j * j == i) ? 1 : 2;
            }
        }
        answer += (count % 2 == 0) ? i : -i;
    }

    return answer;
}
