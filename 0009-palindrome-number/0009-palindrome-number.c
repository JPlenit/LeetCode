bool isPalindrome(int x){
    if (x < 0) {
        return false;
    }
    else if (x == 0) {
        return true;
    }
    int count = 0;
    int num = x;
    while (num) {
        count++;
        num /= 10;
    }

    char* s = (char*)malloc(sizeof(char) * (count + 1));
    sprintf(s,"%d",x);
    int c = count / 2;
    for (int i = 0; i < c; i++) {
        if (s[i] != s[count - i - 1]) return false;
    }
    return true;
}
