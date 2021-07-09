#include <string>
#include <vector>
#include <iostream>
#include <cstring>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    char cstr[phone_number.length()]; 
    strcpy(cstr,phone_number.c_str());

    for(int i=0; i<phone_number.length()-4;i++){
        cstr[i]='*';
    }
    answer=cstr;
    return answer;
}
