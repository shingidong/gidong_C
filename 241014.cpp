//동적할당,포인터 복습
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
   
   char *aa = malloc(sizeof(char)*100);
   
   printf("문자열을 입력해주세요 : ");
   scanf("%s",aa);
   
   int a = 0;
   for (int i = 0; i<100; i++) {
       if (aa[i] == '\0') {
           a = i;
       }
   }
   
   printf("문자열의 길이는 %d입니다.",a);
   
   free(aa);
   return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
   
   int *aa = malloc(sizeof(int)*100);
   int *bb = malloc(sizeof(int)*100);
   
   int *cc = malloc(sizeof(int)*100);
   
   printf("첫번째 정수를 입력해주세요(5자리) : ");
   for (int i = 0; i<5; i++) {
       scanf("%d",&aa[i]);
   }
   
   printf("두번째 정수를 입력해주세요(5자리) : ");
   for (int i = 0; i<5; i++) {
       scanf("%d",&bb[i]);
   }
   
   int temp = 0;
   for (int i = 4; i>=0; i--) {
       cc[i] = aa[i]+bb[i];
       //진짜 계산기
       if (temp == 1) {
           cc[i] += 1;
           temp = 0;
       }
       
       if (cc[i] >= 10) {
           cc[i] -= 10;
           temp = 1;
       }
   }
   
   for (int i = 0; i<5; i++) {
       printf("%d ",cc[i]);
   }
   
   free(aa);
   free(bb);
   free(cc);
   return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    char *aa = malloc(sizeof(char)*100);
    char *bb = malloc(sizeof(char)*100);
    
    printf("첫번째 문자열을 입력해주세요 : ");
    scanf("%s",aa);
    
    printf("두번째 문자열을 입력해주세요 : ");
    scanf("%s",bb);
    
    if (strcmp(aa, bb) == 0) {
        printf("동일");
    }
    
    else
        printf("다름\n");
        for (int i = 0; i<100; i++) {
            if (aa[i] != bb[i]) {
                printf("%d번째 위치에서 두 값이 다릅니다\n",i);
            }
        }
    
    free(aa);
    free(bb);
    return 0;
}
//구조체 복습
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
   char name[20];
   int age;
};

int main(int argc, const char * argv[]) {
   struct Student *s1 = malloc(sizeof(struct Student));
   
   strcat(s1->name, "stupid_dave");
   s1 -> age = 17;
   
   printf("%s ",s1->name);
   printf("%d\n",s1 -> age);
   return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book {
   char name[20];
   int price;
};

int main(int argc, const char * argv[]) {
   struct Book *b1 = malloc(sizeof(struct Book));
   
   strcat(b1->name, "beloved_dave");
   b1 -> price = 17000;
   
   printf("%s ",b1->name);
   printf("%d\n",b1 -> price);
   return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Employee {
   char name[20];
   int money;
};

int main(int argc, const char * argv[]) {

   struct Employee *e = malloc(sizeof(struct Employee)*5);

   strcat(e[0].name, "dave");
   e[0].money = 2700000;

   strcat(e[1].name, "kevin");
   e[1].money = 3700000;

   strcat(e[2].name, "laura");
   e[2].money = 4200000;

   strcat(e[3].name, "jon");
   e[3].money = 3400000;

   strcat(e[4].name, "poter");
   e[4].money = 1900000;

   int a = 0;
   printf("비교할 연봉을 선택하세요 : ");
   scanf("%d",&a);

   for (int i = 0; i<5; i++) {
       if (e[i].money > a) {
           printf("이름 : %s, 연봉 : %d",e[i].name,e[i].money);
       }
   }
   return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct point {
   int x;
   int y;
};

int main(int argc, const char * argv[]) {
   
   struct point *a = malloc(sizeof(struct point));
   struct point *b = malloc(sizeof(struct point));
   
   a->x = 0;
   a->y = 0;
   
   b->x = 3;
   b->y = 4;

   int c = a->x - b->x;
   int d = a->y - b->y;
   
   int e = c*c + d*d;
   
   float f = 1;
   for (int i = 0; i<2; i++) {
       f = f*e;
   }
   
   printf("%f",f);


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
   int math;
   int english;
   int physics;
};

int main(int argc, const char * argv[]) {
   struct Student *s= malloc(sizeof(struct Student)*2);

   s[0].english =75;
   s[0].math = 35;
   s[0].physics = 65;
   
   s[1].english=87;
   s[1].math=96;
   s[1].physics=96;
   
   for (int i = 0; i<2; i++) {
       int sum = s[i].english + s[i].math + s[i].physics;
       printf("학생 %d : %d ",i+1,sum);
   }
   return 0;
}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//    int arr[10];
//    
//    for (int i = 0; i <10; i++) {
//        scanf("%d",&arr[i]);
//    }
//    
//    int a = 0;
//    for (int i = 0; i <10; i++) {
//        a += arr[i];
//    }
//    
//    int b = 1;
//    for (int i = 0; i <10; i++) {
//        b *= arr[i];
//    }
//    
//    printf("합한 값 : %d, 평균 : %d, 곱한 값 : %d",a,a/10,b);
//    return 0;
//}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int arr[10];
    
    for (int i = 0; i <10; i++) {
        scanf("%d",&arr[i]);
    }
    
    int tmp = 0;
    for (int i = 0; i<9; i++) {
        for (int j = i+1; j<10; j++) {
            
            if (arr[i] < arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("최댓값 : %d ",arr[0]);
    
    //손해 그냥 바로 한개만 ㄱㄱ
    for (int i = 0; i<9; i++) {
        for (int j = i+1; j<10; j++) {
            
            if (arr[i] > arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("최솟값 : %d ",arr[0]);
    
    return 0;
}
