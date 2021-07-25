//예상 대진표
//https://programmers.co.kr/learn/courses/30/lessons/12985?language=cpp
#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;

    while(a!=b){
        answer++;
        a=(a+1)/2;
        b=(b+1)/2;
    }

    return answer;
}
