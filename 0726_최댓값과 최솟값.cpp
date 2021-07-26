//최댓값과 최솟값
//https://programmers.co.kr/learn/courses/30/lessons/12939?language=cpp

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int min;
    int max;
    string answer = "";
    string tmp;
    bool first = true;
    for(int i=0;i<s.length();i++){
        tmp="";
        while(s[i]!=' '){
            tmp+=s[i];
            i++;
        }if(first){
            min=stoi(tmp);
            max=stoi(tmp);
            first=false;
        }if(min>stoi(tmp)){
            min=stoi(tmp);
        }if(max<stoi(tmp)){
            max=stoi(tmp);
        }
    }answer=to_string(min)+" "+to_string(max);
    
    return answer;
}
