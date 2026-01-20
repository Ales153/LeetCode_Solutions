//i know this is not how this algorythm should look



int* charArrayToIntArray(char*);


int romanToInt(char* s) {
    int result = 0;
    int* intArray = charArrayToIntArray(s); //convert the string to an int array
    for (int i = 0; i < strlen(s) - 1; i++){ //take the int array and make an int out of it
        if (intArray[i] >= intArray[i+1]){
            result += intArray[i];
        }
        else{
            result -= intArray[i];
        }
    }
    result += intArray[strlen(s) - 1]; //add the last int (wasn't added in the for loop)
    free(intArray);
    return result;
}
//convert the string to an array of numbers
int* charArrayToIntArray(char* s){
    int* intArray = malloc(strlen(s) * sizeof(int));  
    for (int i = 0; i < strlen(s); i++){
        switch (s[i]){
            case 'I':
                intArray[i] = 1;
                break;
            case 'V':
                intArray[i] = 5;
                break;
            case 'X':
                intArray[i] = 10;
                break;
            case 'L':
                intArray[i] = 50;
                break;
            case 'C':
                intArray[i] = 100;
                break;
            case 'D':
                intArray[i] = 500;
                break;
            case 'M':
                intArray[i] = 1000;
                break;
        }
    }

    return intArray;
}