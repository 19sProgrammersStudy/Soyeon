//피보나치 수
//https://programmers.co.kr/learn/courses/30/lessons/12945?language=cpp
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i = 1;
    vector<int> v = {0,1};
    while(i!=n){
        i++;
        v.push_back((v[i-1]%1234567)+(v[i-2])%1234567);
    }
    answer=v[i]%1234567;
    return answer;
}
