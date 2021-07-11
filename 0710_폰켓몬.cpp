#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int cnt = nums.size()/2;
    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    
    if(cnt>nums.size()){
        return nums.size();
    }else{
        return cnt;
    }
    
}
