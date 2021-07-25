//깊이/너비 우선 탐색(DFS/BFS)
//https://programmers.co.kr/learn/courses/30/lessons/43165?language=cpp

#include <string>
#include <vector>

using namespace std;
int answer;
void cal(vector<int> numbers,int val,int target){
    if(numbers.empty()){
        if(val==target){
            answer++;
        }
        return;
    }
    int tmp=numbers[numbers.size()-1];
    numbers.pop_back();
    cal(numbers,val+tmp,target);
    cal(numbers,val-tmp,target);
}
int solution(vector<int> numbers, int target) {
    answer = 0;
    int a=numbers[numbers.size()-1];
    numbers.pop_back();
    
    cal(numbers,a,target);
    cal(numbers,-a,target);
    return answer;
}
