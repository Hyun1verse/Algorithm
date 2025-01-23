#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr)
{
    if (arr.empty())
    {
        return {-1};
    }

    int minValue = *min_element(arr.begin(), arr.end());

    vector<int> result;
    for (int num : arr)
    {
        if (num != minValue)
        {
            result.push_back(num);
        }
    }

    return result.empty() ? vector<int>{-1} : result;
}
