int value(char c) {
    if (c == 'I') return 1;
    if (c == 'V') return 5;
    if (c == 'X') return 10;
    if (c == 'L') return 50;
    if (c == 'C') return 100;
    if (c == 'D') return 500;
    if (c == 'M') return 1000;

    return 0;
}
int romanToInt(char* s) {
    int sum=0;
    for(int n=0;s[n]!='\0';n++) {
        if(value(s[n])<value(s[n+1])) {
            sum-=value(s[n]);
        
        }
        else
            sum=sum+value(s[n]);
   
    }
    return sum;
}