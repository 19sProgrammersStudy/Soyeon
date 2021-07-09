#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 1;
    sort(d.begin(),d.end());
    
    int sum=d[0];
    if(sum>budget){
        return 0;
    }
    for(int i=1;i<d.size();i++){
        sum+=d[i];
        if(sum>budget){
            return answer;
        }answer++;
    }
    
    return answer;
}
