bool isPalindrome(int x) {
    // just check if number negative or ends with 0, in either case it can't be palindrome
    if (x < 0 || (x % 10 == 0 && x != 0)){
        return false;
    }
    // if it's 0 it's obviosly palindrom, also not sure if the rest of my algorythm could handle 0 so just get rid of it
    if (x == 0){
        return true;
    }
    // take the right half of x, reverse it and put it into y, and also set x to just the left half of the x
    int y = 0;
    while (y < x){
        y *= 10;
        y += x % 10;
        x -= x % 10;
        x /= 10;
    }
    // compare if x and y are the same numbers, and if the initial number was odd, just remove the last number from y (cause of the while loop that doesn't stop while y is smaller than x, so y is always bigger or the same size, so we need to remove that one middle number from y)
    if (x == y || (y - (y % 10))/10 == x){
        return true;
    }
    else {
        return false;
    }
}