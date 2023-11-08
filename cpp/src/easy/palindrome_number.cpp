bool isPalindrome(int x) {
    // palindromes must be positive integers
    if (x < 0) {return false;}

    // make a copy of input int, will use to build reverse int, then compare reverse to input
    int temp = x;

    // will build reverse with each iteration of following while-loop
    long reverse = 0;

    // while temp != 0
    while (temp) {
        //  "reverse * 10" will add a 0 to the right side of reverse
        //  " + temp % 10" -> the remainder when dividing by ten is the far right digit
        reverse = reverse * 10 + temp % 10;
        // dividing integers will discard the remainder. temp will eventually reach 0, breaking loop
        temp /= 10;
    }

    return reverse == x;
}

/*
// alternative solution: checks if first half of input is equivalent to second half
bool isPalindrome(int x) {
    if (x < 0 || (x != 0 && x % 10 == 0)) {return false;}

    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    // if palindrome and even number of digits, then x == reversed
    // if palindrome and odd number of digits, then x == reversed / 10
    return (x == reversed) || (x == reversed / 10);
}
*/