#include <algorithm>

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    int i = 1;
    while(binary_search(A.begin(), A.end(), i))
    {
        ++i;
    }
    return i;
}