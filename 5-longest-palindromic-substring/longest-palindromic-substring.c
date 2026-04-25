char* longestPalindrome(char* s) {
    int n = strlen(s);

    int start = 0;  
    int maxLen = 1;  
    for (int i = 0; i < n; i++) {

        
        int l = i;
        int r = i;

        while (l >= 0 && r < n && s[l] == s[r]) {
            l--;
            r++;
        }

        int len = r - l - 1;

        if (len > maxLen) {
            maxLen = len;
            start = l + 1;
        }

        l = i;
        r = i + 1;

        while (l >= 0 && r < n && s[l] == s[r]) {
            l--;
            r++;
        }

        len = r - l - 1;

        if (len > maxLen) {
            maxLen = len;
            start = l + 1;
        }
    }

   
    char* result = (char*)malloc((maxLen + 1) * sizeof(char));

    for (int i = 0; i < maxLen; i++) {
        result[i] = s[start + i];
    }

    result[maxLen] = '\0';

    return result;
    
}