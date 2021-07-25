//수식 최대화
//https://programmers.co.kr/learn/courses/30/lessons/67257?language=cpp

#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <iostream>

using namespace std;

vector<long long> cal(vector<long long> num,vector<char> e,char exp){
    vector<long long> answer;
    answer.push_back(num[0]);
    for(int i=0;i<e.size();i++){
        if(e[i]==exp){
            long long l=answer[answer.size()-1];
            answer.pop_back();
            if(exp=='+'){
                answer.push_back(l+num[i+1]);
            }else if(exp=='-'){
                answer.push_back(l-num[i+1]);
            }else if(exp=='*'){
                answer.push_back(l*num[i+1]);
            }
        }else{
            answer.push_back(num[i+1]);
        }
    }return answer;
}
vector<char> new_ex(vector<char> ex,char e){
    vector <char> answer;
    for(int i=0;i<ex.size();i++){
        if(ex[i]!=e){
            answer.push_back(ex[i]);
        }
    }
    return answer;
}
long long solution(string expression) {
    long long answer = 0;
    vector<char> v={'*','+','-'};
    vector<long long> num;
    vector<char> ex;
    string test="";
    for(int i=0;i<expression.length();i++){
        string s="";
        while(isdigit(expression[i])){
            s+=expression[i];
            i++;
        }num.push_back(stoi(s));
        ex.push_back(expression[i]);
    }
    
    do{
        vector <long long> newnum=num;
        vector <char> newex=ex;
        for(int i=0;i<v.size();i++){
            newnum=cal(newnum,newex,v[i]);
            newex=new_ex(newex,v[i]);
        }if(answer<abs(newnum[0])){
            answer=abs(newnum[0]);
        }test+=to_string(abs(newnum[0]))+" ";
    }while(next_permutation(v.begin(),v.end()));
    return answer;
}
