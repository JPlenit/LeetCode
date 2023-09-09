char * reverseVowels(char * s){
    char temp;
    int size = strlen(s) - 1;
    for (int i = 0; i < size; i++) {
        if (s[i] == 'a' || s[i] =='e' || s[i] == 'i' || s[i] =='o' || s[i] =='u' || s[i] == 'A' || s[i] =='E' || s[i] == 'I' || s[i] =='O' || s[i] =='U') {
            for (; size > i; size--) {
                if (s[size] == 'a' || s[size] =='e' || s[size] == 'i' || s[size] =='o' || s[size] =='u' || s[size] == 'A' || s[size] =='E' || s[size] == 'I' || s[size] =='O' || s[size] =='U') {
                    temp = s[i];
                    s[i] = s[size];
                    s[size] = temp;
                    size--;
                    break;
                }
            }
        }
    }
    return s;
}