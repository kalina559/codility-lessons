#include <algorithm>
#include<cmath>
int solution(int X, int Y, int D) 
{
    return ceil((Y - X) / double(D));
}