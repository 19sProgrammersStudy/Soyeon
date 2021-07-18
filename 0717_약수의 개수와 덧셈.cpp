//약수의 개수와 덧셈
//https://programmers.co.kr/learn/courses/30/lessons/77884?language=cpp
#include <string>
#include <vector>

using namespace std;

int cal(int num){
    int cnt=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cnt++;
        }
    }return cnt;
}

int solution(int left, int right) {
    int answer = 0;
    int t=0;
    for(int i=left;i<=right;i++){
        t=cal(i);
        if(t%2==0){
            answer+=i;
        }else{
            answer-=i;
        }
    }
    
    return answer;
}
