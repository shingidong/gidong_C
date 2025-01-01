#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int a;
    scanf("%d",&a);
    
    int b;
    scanf("%d",&b);
    
    int c = 0;
    for (int i = 0; i<a; i++) {
        c += b%10; //나머지
        b = b/10; //몫
    }
    
    printf("%d",c);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    char s[100] = "abcdefghijklmnopqrstuvwsyz";
    
    char a[100];
    scanf("%s",a);
    
    int b[26];
    for (int i = 0; i<26; i++) {
        b[i] = -1;
    }
    
    int cnt = 0;
    
    for (int i = 0; i<26; i++) {
        cnt = 0;
        
        for (int j = 0; j<strlen(a); j++) {
            
            if (s[i] == a[j] && b[i] == -1) {
                b[i] = j;
                cnt = 1;
            }
        }
        if (cnt == 0) {
            b[i] = -1;
        }
    }
   
    for (int i = 0; i<26; i++) {
        printf("%d ",b[i]);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    char c[100000];
    scanf("%s",c);
    
    int a = 1;
    
    for (int i = 0; i<strlen(c); i++) {
        if (strcmp(c[i], ' ') == 0) {
            a += 1;
        }
    }
    
    printf("%d",a);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int a,b;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    int c[3],d[3];
    int sum1 = 0;
    int sum2 = 0;
    
    for (int i = 100; i>=1; i/=10) {
        sum1 += (a%10)*i;
        a = a/10;
    }
    
    for (int i = 100; i>=1; i/=10) {
        sum2 += (b%10)*i;
        b = b/10;
    }
    if (sum1 > sum2) {
        printf("%d",sum1);
    }
    else
        printf("%d",sum2);
}

