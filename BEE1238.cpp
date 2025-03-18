//BEE1238
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char str1[51], str2[51]; 

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        // Lê as duas strings
        scanf("%s %s", str1, str2);

        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int minLen = (len1 < len2) ? len1 : len2;

        for (int j = 0; j < minLen; j++) {
            printf("%c%c", str1[j], str2[j]);
        }

        if (len1 > len2) {
            printf("%s", &str1[minLen]);
        } else if (len2 > len1) {
            printf("%s", &str2[minLen]);
        }

        printf("\n");
    }

    return 0;
}