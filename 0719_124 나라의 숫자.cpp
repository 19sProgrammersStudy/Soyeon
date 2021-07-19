//124 나라의 숫자
//https://programmers.co.kr/learn/courses/30/lessons/12899?language=cpp

#include <string>
#include <vector>
#include <math.h>

using namespace std;

string solution(int n) {
    string answer = "";
    vector<string> v={"4","1","2"};
    int n1 = 0;
    int n2 = n;
    
    while(n!=0){
        n1=n%3;
        n=n/3;
        
        if(n1==0){
            answer="4"+answer;
            n--;
        }
        else if(n1==1){
            answer="1"+answer;
        }
        else{
            answer="2"+answer;
        }
    }
    return answer;
}
