#include <algorithm>
#include<vector>
int solution(int N) 
{
    int rem;
    vector<int> binary;
    vector<int> onesPositions;
    while (N != 0)
    {
        rem = N % 2;
        N /= 2;
        binary.push_back(rem);
    }
    
    int maxDifference = 0;
    int lastOne = -1;
    for(unsigned int i = 0; i < binary.size(); ++i)
    {
        if(binary[i] == 1)
        {
            if(lastOne == -1)
            {
                lastOne = i;
            }
            else
            {
                if((i - lastOne) > maxDifference)
                {
                    maxDifference = i - lastOne - 1;
                }
                lastOne = i;
            }
        }
    }
    return maxDifference;
}
