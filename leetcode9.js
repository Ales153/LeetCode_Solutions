/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    return (x == x.toString().split("").reverse().join("")) ? true : false;
};

// don't really know if this is a good solution, i dont like how i combined a lot of methods, but i wanted to make it one-line