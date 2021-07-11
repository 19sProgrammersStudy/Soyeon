#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int tmp = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            if(tmp%2==0){
                answer+= toupper(s[i]);
            }else{
                answer+= tolower(s[i]);
            }tmp++;
        }else{
            answer+=' ';
            tmp=0;
        }
    }
    return answer;
}
