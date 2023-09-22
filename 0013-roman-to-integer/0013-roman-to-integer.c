int romanToInt(char * s){
    int sum = 0;
    char c;
    int count = 0;
    int before;
    while(s[count]) {
        c = s[count++];
        switch(c) {
            case 'I':
                before = 0;
                sum+= 1;
                break;
            case 'V':
                if (before == 0) {
                    sum+=3;
                    break;
                }
                before = 1;
                sum+=5;
                break;
            case 'X':
                if (before == 0) {
                    sum+=8;
                    break;
                }
                before = 2;
                sum+=10;
                break;
            case 'L':
                if (before == 2) {
                    sum+=30;
                    break;
                }
                before = 3;
                sum+= 50;
                break;
            case 'C':
                if (before == 2) {
                    sum+=80;
                    break;
                }
                before = 4;
                sum+=100;
                break;
            case 'D':
                if (before == 4) {
                    sum+=300;
                    break;
                }
                before = 5;
                sum+=500;
                break;
            case 'M':
                if (before == 4) {
                    sum+=800;
                    break;
                }
                before = 6;
                sum+=1000;
                break;
            defalt:
                break;     
        }
    }
    return sum;
}