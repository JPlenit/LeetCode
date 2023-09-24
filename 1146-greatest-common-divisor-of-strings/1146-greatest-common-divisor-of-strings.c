int cheakDiv(char* s1, char *s2, int l1, int l2) {
    int t = 0, i, j;
    bool cheak = false;
    if (!strcmp(s1, s2)) return l1;
    if (s1[0] != s2[0]) return 0;
    for (i = l1 - 1; i > 0; i--) {
        if (s1[i] != s2[i % l2]) return 0;

        if (i <= l1 / 2 && l1 % i == 0 && l2 % i == 0) {
            cheak = true;
            for (j = 0; j < l1; j++) {
                if (s1[j] != s1[j % i]) {
                    cheak = false;
                    break;
                }
            }
            if (cheak && i == l2) return i;
            else if (cheak && i <= l2 / 2) {
                for (j = 0; j < l2; j++) {
                    if (s2[j] != s2[j % i]) {
                        cheak = false;
                        break;
                    }
                }
                return i;
            }
            else cheak = false;
        }
    }

    return t;
}


char * gcdOfStrings(char * str1, char * str2){
    int slen1 = strlen(str1), slen2 = strlen(str2);
    int t;
    char* s;
    if (slen1 > slen2) {
        t = cheakDiv(str1, str2, slen1, slen2);
    }
    else {
        t = cheakDiv(str2, str1, slen2, slen1);
    }

    
    s = (char*)malloc(sizeof(char) * (t + 1));
    for (int i = 0; i < t; i++) {
        s[i] = str1[i];
    }
    s[t] = '\0';
    return s;
}