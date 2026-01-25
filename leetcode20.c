#include <stdbool.h>

void addBracketToTheList(char* bracketlist, char* s, int);

bool isValid(char* s) {
    if (strlen(s) % 2 == 1 || s[0] == ')' || s[0] == ']' || s[0] == '}'){
        return false;
    }

    char openedBrackets[100000];
    memset(openedBrackets, '\0', 100000);
    openedBrackets[0] = s[0];

    for (int i = 1; i < strlen(s); i++){
        if (s[i] == '(' || s[i] == '{' || s[i] == '['){
            addBracketToTheList(openedBrackets,s, i);
        }
        else{
            if (strlen(openedBrackets) == 0){
                return false;
            }
            switch (s[i]){
                case ')':
                    if (openedBrackets[strlen(openedBrackets) - 1] != '('){
                        return false;
                    }
                    openedBrackets[strlen(openedBrackets) - 1] = '\0';

                    break;
                case '}':
                    if (openedBrackets[strlen(openedBrackets) - 1] != '{'){
                        return false;
                    }
                    openedBrackets[strlen(openedBrackets) - 1] = '\0';
                    break;
                case ']':
                    if (openedBrackets[strlen(openedBrackets) - 1] != '['){
                        return false;
                    }
                    openedBrackets[strlen(openedBrackets) - 1] = '\0';
                    break;
            }
        }
    }
    if (strlen(openedBrackets) != 0){
        return false;
    }


    return true;
}

void addBracketToTheList(char* bracketlist, char* s, int i){
    
    bracketlist[strlen(bracketlist)] = s[i];
    bracketlist[strlen(bracketlist) + 1] = '\0';
    
    
}