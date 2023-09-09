bool isSubsequence(char * s, char * t){
    int tSize = strlen(t);
    int sSize = strlen(s);
    int j, k = 0;
    if (sSize == 0) return true;
    for (int i = 0; i < tSize; i++) {
        if (t[i] == s[k]) k++;
    }
        if (sSize == k) return true;

    return false;
}