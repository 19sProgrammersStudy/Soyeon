#include <string>
#include <vector>
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;
string one(string new_id){
    for(char &c : new_id) if (isupper(c)) c = tolower(c);
    return new_id;
}
string two(string new_id){
    string answer="";
    for(char &c : new_id){
        if(isalpha(c)||isdigit(c)||c=='-'||c=='_'||c=='.'){answer+=c;}
    }return answer;
}
string three(string new_id){
    string answer="";
    for(int i=0;i<new_id.length();i++){
        if(i+1<new_id.length()&&new_id[i]=='.'){
            if(new_id[i+1]!='.'){answer+='.';}
        }else{ 
            answer+=new_id[i];
        }
    }return answer;
}
string four(string new_id){
    if(new_id=="."){
        new_id="";
    }
    else{
        if(new_id[0]=='.'){
            new_id= new_id.substr(1,new_id.length()-1);
            if(new_id.length()==1){return new_id;}
        }
         if(new_id[new_id.length()-1]=='.'){
            new_id = new_id.substr(0,new_id.length()-1);
         }
    }return new_id;
}
string five(string new_id){
    if(new_id.length()==0){new_id+='a';} return new_id;
}
string six(string new_id){
    if(new_id.length()>15){
       if(new_id[14]=='.'){new_id = new_id.substr(0,14);}
        else{new_id = new_id.substr(0,15);}
    }return new_id;
}
string seven(string new_id){
    if(new_id.length()<=2){
        char c=new_id[new_id.length()-1];
        while(new_id.length()<3){new_id+=c;}
    }return new_id;
}
string solution(string new_id) {
    string answer = "";
    
    answer=seven(six(five(four(three(two(one(new_id)))))));
    
    return answer;
}
