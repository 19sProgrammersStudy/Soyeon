//같은 숫자는 싫어
//https://programmers.co.kr/learn/courses/30/lessons/12906?language=cpp

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    for(int i=0;i<arr.size();i++){
        
        if((i!=0&&answer[answer.size()-1]!=arr[i])||i==0){
            answer.push_back(arr[i]);
        }
    }

    return answer;
}
