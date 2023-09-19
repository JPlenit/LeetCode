char * removeDuplicates(char * s){
    int len = strlen(s), count = 0;
    int left, right;
    char* str;
    
    for (int i = 0; i < len - 1; i++) {
        left = i; right = left + 1;
        while (s[left] == s[right]) {
            s[left--] = NULL;
            s[right] = NULL;
            count += 2;
            i = right++;
            if (left < 0) break;
            while(!s[left]) {
                left--;
                if (left < 0) break;
            }
            if (left < 0 || right == len) break;
        }
    }
    

    str = (char*)malloc(sizeof(char) * (len - count + 1));
    count = 0;
    for (int i = 0; i < len; i++) {
        if(s[i]) {
            s[count++] = s[i];
        }
    }
    s[count] = '\0';
    return s;
}