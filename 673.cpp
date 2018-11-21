#include <iostream>
#include <stack>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

bool isBal(string s)
{
    stack < char > stc;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '[') stc.push(s[i]);
        else{
            if(stc.empty()) return false;
            else if (s[i] == ')' && stc.top() == '(') stc.pop();
            else if(s[i] == ']' && stc.top() == '[')  stc.pop();
            else return false;
        }
    }
    if(stc.empty()) return true;
    else            return false;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("o.txt", "w", stdout);
    int t; scanf("%d", &t);
    cin.ignore();
    while(t--){
            string str;
            getline(cin, str);
            printf("%s\n", (isBal(str)) ? "Yes" : "No" );
        }
    return 0;
}

