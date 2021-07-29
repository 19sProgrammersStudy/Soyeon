//구명보트
//https://programmers.co.kr/learn/courses/30/lessons/42885?language=cpp

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(),people.end());
    int min=0;
    int max;
    while(min<people.size()){
        max=people.size()-1;
        if(people[min]+people[max]<=limit){
            answer+=1;
            min+=1;
            people.pop_back();
        }else{
            answer+=1;
            people.pop_back();
        }
    }
    return answer;
}
