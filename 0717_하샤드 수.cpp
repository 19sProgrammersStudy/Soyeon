//하샤드 수
//https://programmers.co.kr/learn/courses/30/lessons/12947?language=cpp

#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    string s = to_string(x);
    int num=0;
    for(int i=0;i<s.length();i++){
        num+=(s[i]-'0');
    }
    if(x%num==0){
        return true;
    }else{
        return false;
    }
}
