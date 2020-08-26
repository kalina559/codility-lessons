#include <algorithm>
#include<set>
int solution(int X, vector<int> &A) 
{
    set<int> steps;
    for(unsigned int i = 0; i < A.size(); ++i)
    {
        steps.insert(A[i]);
        if(steps.size() == X)
            return i;
    }
    return -1;
}