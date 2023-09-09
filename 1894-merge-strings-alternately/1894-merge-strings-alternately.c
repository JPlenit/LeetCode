

char * mergeAlternately(char * word1, char * word2){
    int length1 = strlen(word1);
    int length2 = strlen(word2);
    char cheak = length1 >= length2 ? 1 : 0;
    char* marge = (char*)malloc(sizeof(char)*(length1 + length2) + 1);;
    int i = 0;
    
    if (cheak) {
        for (; i < length2; i++) {
            marge[2*i] = word1[i];
            marge[2*i + 1] = word2[i];
        }
        for (; i < length1; i++) marge[i + length2] = word1[i];
    }
    else {
        for (; i < length1; i++) {
            marge[2*i] = word1[i];
            marge[2*i + 1] = word2[i];
        }
        for (; i < length2; i++) marge[i + length1] = word2[i];
    }
    marge[length1 + length2] = '\0';

    return marge;
}