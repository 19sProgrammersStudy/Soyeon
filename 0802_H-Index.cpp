//H-Index
//https://programmers.co.kr/learn/courses/30/lessons/42747?language=cpp

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(),citations.end(),greater<int>());
    for(int i=citations[0];i>=0;i--){
        int cnt=0;
        for(int j=0;j<citations.size();j++){
            if(citations[j]>=i){cnt++;}
        }
        if(cnt>=i&&citations.size()-cnt<=i&&answer<i){
            answer=i;
        }
    }
    return answer;
}
