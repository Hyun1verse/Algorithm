#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr)
{
    if (arr.empty())
    {
        return {-1};
    }

    auto minIt = min_element(arr.begin(), arr.end());

    arr.erase(minIt);

    return arr.empty() ? vector<int>{-1} : arr;
}
