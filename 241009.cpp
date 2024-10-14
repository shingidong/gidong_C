//
//  main.c
//  c언어 마스터하기
//
//  Created by 신기동 on 10/9/24.
//

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//    char aa[100] = "Hello World!\n";
//    
//    printf("%s", aa);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//    
//    char *aa = malloc(sizeof(char)*100);
//
//    aa = "Hello World!";
//    printf("%s\n", aa);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//    
//    char aa1[100];
//    char aa2[100];
//
//    printf("첫번째 문자열을 입력해주세요 : ");
//    scanf("%s",aa1);
//    
//    printf("두번째 문자열을 입력해주세요 : ");
//    scanf("%s",aa2);
//    
//    printf("%s%s\n", aa1,aa2);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//    
//    char *aa1 = malloc(sizeof(char)*100);
//    char *aa2 = malloc(sizeof(char)*100);
//
//    printf("첫번째 문자열을 입력해주세요 : ");
//    scanf("%s",aa1);
//    
//    printf("두번째 문자열을 입력해주세요 : ");
//    scanf("%s",aa2);
//    
//    printf("%s%s\n", aa1,aa2);
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//    
//    char aa[100];
//
//    printf("문자열을 입력해주세요 : ");
//    scanf("%s",aa);
//    
//    for (int i = 0; i<strlen(aa); i++) {
//        printf("%d ",aa[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//    
//    char *aa = malloc(sizeof(char)*100);
//
//    printf("문자열을 입력해주세요 : ");
//    scanf("%s",aa);
//    
//    for (int i = 0; i<strlen(aa); i++) {
//        printf("%d ",aa[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//    
//    char aa[100];
//
//    printf("문자열을 입력해주세요 : ");
//    scanf("%s",aa);
//    
//    printf("%d\n",strlen(aa));
//    
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//    
//    char *aa = malloc(sizeof(char)*100);
//
//    printf("문자열을 입력해주세요 : ");
//    scanf("%s",aa);
//    
//    printf("%d\n",strlen(aa));
//    
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//    
//    char aa[3][100];
//
//    for (int i = 0; i < 3; i++) {
//        printf("%d번째 문자열을 입력해주세요 : ",i+1);
//        scanf("%s",aa[i]);
//    }
//    
//    for (int i = 0; i < 3; i++) {
//        printf("%c",aa[i][0]);
//    }
//    
//    printf(" ");
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//    
//    char **aa = malloc(sizeof(char*)*3);
//    
//    for (int i = 0; i < 3; i++) {
//        *(aa+i) = malloc(sizeof(char)*100);
//    }
//
//    for (int i = 0; i < 3; i++) {
//        printf("%d번째 문자열을 입력해주세요 : ",i+1);
//        scanf("%s",*(aa+i));
//    }
//    
//    for (int i = 0; i < 3; i++) {
//        printf("%c",aa[i][0]);
//    }
//    
//    printf(" ");
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//
//    int aa[10];
//    
//    for (int i = 0; i<5; i++) {
//        scanf("%d",&aa[i]);
//    }
//    
//    for (int i = 0; i<5; i++) {
//        printf("%d",aa[i]);
//    }
//    
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//
//    int *aa = malloc(sizeof(int)*100);
//    
//    for (int i = 0; i<5; i++) {
//        scanf("%d",&aa[i]);
//    }
//    
//    for (int i = 0; i<5; i++) {
//        printf("%d ",aa[i]);
//    }
//    
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//
//    int aa[10];
//
//    for (int i = 0; i<5; i++) {
//        scanf("%d",&aa[i]);
//    }
//    
//    int j = 0;
//    for (int i = 0; i<5; i++) {
//        j += aa[i];
//    }
//    
//    printf("%d\n",j);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//
//    int *aa = malloc(sizeof(int)*100);
//    
//    for (int i = 0; i<5; i++) {
//        scanf("%d",&aa[i]);
//    }
//    
//    int j = 0;
//    for (int i = 0; i<5; i++) {
//        j += aa[i];
//    }
//    
//    printf("%d\n",j);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//
//    int aa[10];
//    
//    for (int i = 0; i<5; i++) {
//        scanf("%d",&aa[i]);
//    }
//    
//    for (int i = 0; i<5; i++) {
//        printf("%d ",aa[4-i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//
//    int *aa = malloc(sizeof(int)*100);
//    
//    for (int i = 0; i<5; i++) {
//        scanf("%d",&aa[i]);
//    }
//    
//    for (int i = 0; i<5; i++) {
//        printf("%d ",aa[4-i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//
//    int aa[10];
//    
//    for (int i = 0; i<5; i++) {
//        scanf("%d",&aa[i]);
//    }
//    
//    for (int i = 0; i<5; i++) {
//        printf("%d ",aa[i]*2);
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//
//    int *aa = malloc(sizeof(int)*10);
//    
//    for (int i = 0; i<5; i++) {
//        scanf("%d",&aa[i]);
//    }
//    
//    for (int i = 0; i<5; i++) {
//        printf("%d ",aa[i]*2);
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//
//    int aa[10];
//    
//    for (int i = 0; i<5; i++) {
//        scanf("%d",&aa[i]);
//    }
//    
//    int max = 0;
//    
//    for (int i = 0; i<5; i++) {
//        if (max < aa[i]) {
//            max = aa[i];
//        }
//    }
//    
//    printf("최댓값 : %d",max);
//    
//    int min = 1000000;
//    
//    for (int i = 0; i<5; i++) {
//        if (min > aa[i]) {
//            min = aa[i];
//        }
//    }
//    
//    printf("최솟값 : %d",min);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//
//    int *aa = malloc(sizeof(int)*10);
//    
//    for (int i = 0; i<5; i++) {
//        scanf("%d",&aa[i]);
//    }
//    
//    int max = 0;
//    
//    for (int i = 0; i<5; i++) {
//        if (max < aa[i]) {
//            max = aa[i];
//        }
//    }
//    
//    printf("최댓값 : %d",max);
//    
//    int min = 1000000;
//    
//    for (int i = 0; i<5; i++) {
//        if (min > aa[i]) {
//            min = aa[i];
//        }
//    }
//    
//    printf("최솟값 : %d",min);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//
//    int *aa = malloc(sizeof(int)*10);
//    
//    for (int i = 0; i<10; i++) {
//        scanf("%d",&aa[i]);
//    }
//
//    int tmp;
//    for (int i = 0; i<9; i++) {
//        for (int j = 1+i; j<10; j++) {
//             
//            if (aa[i] < aa[j]) {
//                tmp = aa[j];
//                aa[j] = aa[i];
//                aa[i] = tmp;
//            }
//        }
//    }
//    printf("최댓값 : %d",aa[0]);
//    printf("최솟값 : %d",aa[9]);
//
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//
//    int *aa = malloc(sizeof(int)*10);
//
//    for (int i = 0; i<10; i++) {
//        scanf("%d",&aa[i]);
//    }
//    
//    for (int i = 0; i<10; i++) {
//        printf("%d ",aa[9-i]);
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//
//    int *aa = malloc(sizeof(int)*10);
//
//    for (int i = 0; i<10; i++) {
//        scanf("%d",&aa[i]);
//    }
//    
//    float sum = 0;
//    for (int i = 0; i<10; i++) {
//        sum += aa[i];
//    }
//    
//    printf("%f ",sum/10);
//
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//
//    char aa[100];
//    scanf("%s",aa);
//
//    char *bb = malloc(sizeof(char)*strlen(aa));
//    
//    for (int i = 0; i<strlen(aa); i++) {
//        bb[i] = aa[i];
//    }
//
//    printf("%s",bb);
//    
//    free(bb);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//    
//    int a,b;
//    
//    printf("x축의 길이를 입력하세요 : ");
//    scanf("%d",&a);
//    
//    printf("y축의 길이를 입력하세요 : ");
//    scanf("%d",&b);
//
//    char **aa = malloc(sizeof(char*)*a);
//    for (int i = 0; i<a; i++) {
//        aa[i] = malloc(sizeof(char)*b);
//    }
//    
//    for (int i = 0; i<a; i++) {
//        printf("%d번째 정수열을 입력하세요 : ",i+1);
//        
//        for (int j = 0; j<b; j++) {
//            scanf(" %c",&aa[i][j]);
//        }
//    }
//
//    for (int i = 0; i<a; i++) {
//        printf("%s\n",aa[i]);
//    }
//    
//    free(aa);
//    return 0;
//}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    char *aa = malloc(sizeof(char)*100);
    
    printf("문자열을 입력해주세요 : ");
    scanf("%s",aa);
    
    for (int i = 0; i<100; i++) {
        if (aa[i] == '₩0') {
            <#statements#>
        }
    }
    
    for (int i = 0; i<a; i++) {
        printf("%d번째 정수열을 입력하세요 : ",i+1);
        
        for (int j = 0; j<b; j++) {
            scanf(" %c",&aa[i][j]);
        }
    }

    for (int i = 0; i<a; i++) {
        printf("%s\n",aa[i]);
    }
    
    free(aa);
    return 0;
}
