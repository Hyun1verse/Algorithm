#include <vector>
using namespace std;

int solution(vector<int> numbers) 
{
    int totalSum = 45; 
    int arraySum = 0;

    for (int num : numbers) 
    {
        arraySum += num;
    }

    return totalSum - arraySum;
}
