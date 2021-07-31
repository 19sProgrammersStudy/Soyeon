//JadenCase 문자열 만들기
//https://programmers.co.kr/learn/courses/30/lessons/12951?language=cpp

#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    if(!isdigit(s[0])&&islower(s[0])){
        answer+=toupper(s[0]);
    }else{
        answer+=s[0];
    }
    for(int i=1;i<s.length();i++){
        if(s[i-1]==' '){
            if(!isdigit(s[i])&&islower(s[i])){
                answer+=toupper(s[i]);
                continue;
            }
        }else if(isupper(s[i])){
            answer+=tolower(s[i]);
            continue;
        }
        answer+=s[i];
        
    }
    return answer;
}
