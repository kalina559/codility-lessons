#include <algorithm>
#include <vector>


vector<int> solution(int N, vector<int> &A) 
{
    vector<int> counters(N, 0);
    int max = 0;
    int lastMaxCounterId = 0;
    int lastMaxCounterValue = 0;
    for(unsigned int i = 0; i < A.size(); ++i)
    {
        if(A[i] == N + 1)
        {
            lastMaxCounterId = i;
            lastMaxCounterValue = max;
            
            
        }
        else
        {
            if(counters[A[i] -1] < lastMaxCounterValue)
            {
                counters[A[i] -1] = lastMaxCounterValue;
            }
            counters[A[i] - 1] += 1;
            if(max == 0 || counters[A[i] - 1] > max)
            {
                max = counters[A[i] - 1];
            }
        }
        
    }
    
    for(int i = 0; i < N; ++i)
    {
        counters.at(i) = lastMaxCounterValue;
    }
    
    if(lastMaxCounterId == 0)
        lastMaxCounterId = -1;
    
    for(int i = lastMaxCounterId + 1; i < A.size(); ++i)
    {
        counters[A[i] - 1] += 1;
    }
    return counters;
}