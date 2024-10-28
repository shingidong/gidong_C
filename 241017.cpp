
 main.c
 no error plz

 Created by 신기동 on 10/16/24.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student{
   char name[20];
   int number;
   int score;
};

int main(int argc, const char * argv[]) {
   
   struct Student s[3];
   
   strcat(s[0].name, "gidong");
   s[0].number = 10218;
   s[0].score = 100;
   
   strcat(s[1].name, "hoguen");
   s[1].number = 10217;
   s[1].score = 35;
   
   strcat(s[2].name, "piggy");
   s[2].number = 10214;
   s[2].score = 69;
   
   for (int i = 0; i<3; i++) {
       printf("이름 : %s, 학번 : %d, 성적 : %d \n",s[i].name,s[i].number,s[i].score);
   }
   
   return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
   
   int a;
   int b;
   printf("두 정수를 입력하세요 : ");
   scanf("%d%d",&a,&b);
   
   char c;
   printf("계산할 방식을 선택해 주세요 : ");
   scanf(" %c",&c);
   
   if (c == '+') {
       printf("%d",a+b);
   }
   if (c == '-') {
       printf("%d",a-b);
   }
   if (c == 'X') {
       printf("%d",a*b);
   }
   if (c == '%') {
       
       if (b == 0) {
           printf("계산 안되죠?");
       }
       printf("%d\n",a/b);
   }
   return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
   
   int a[10];
   
   for (int i = 0; i<10; i++) {
       scanf("%d", &a[i]);
   }
   
   int c = 0;
   
   for (int i = 0; i<9; i++) {
       for (int j = i+1; j<10; j++) {
           if (a[i] < a[j]) {
               c= a[i];
               a[i] = a[j];
               a[j] = c;
           }
       }
   }
   
   for (int i = 0; i<10; i++) {
       printf("%d \n", a[i]);
   }
   
   return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Date{
   int year;
   int month;
   int day;
};

int main(int argc, const char * argv[]) {

   struct Date d[2];
   
   printf("더 큰 년 ,월, 일");
   scanf("%d,%d,%d",&d[0].year, &d[0].month, &d[0].day);
   
   printf("더 작은 년 ,월, 일");
   scanf("%d,%d,%d",&d[1].year, &d[1].month, &d[1].day);
   
   int a;
   int b;
   int all =(d[0].year-d[1].year)*365 + d[0].day- d[1].day;
   
   if (d[0].month == 1) {
       a = 31;
   }
   if (d[0].month == 2) {
       a = 28;
   }
   if (d[0].month == 3) {
       a = 31;
   }
   if (d[0].month == 4) {
       a = 30;
   }
   if (d[0].month == 5) {
       a = 31;
   }
   if (d[0].month == 6) {
       a = 30;
   }
   if (d[0].month == 7) {
       a = 31;
   }
   if (d[0].month == 8) {
       a = 31;
   }
   if (d[0].month == 9) {
       a = 30;
   }
   if (d[0].month == 10) {
       a = 31;
   }
   if (d[0].month == 11) {
       a = 30;
   }
   if (d[0].month == 12) {
       a = 31;
   }
   if (d[1].month == 1) {
       b = 31;
   }
   if (d[1].month == 2) {
       b = 28;
   }
   if (d[1].month == 3) {
       b = 31;
   }
   if (d[1].month == 4) {
       b = 30;
   }
   if (d[1].month == 5) {
       b = 31;
   }
   if (d[1].month == 6) {
       b = 30;
   }
   if (d[1].month == 7) {
       b = 31;
   }
   if (d[1].month == 8) {
       b = 31;
   }
   if (d[1].month == 9) {
       b = 30;
   }
   if (d[1].month == 10) {
       b = 31;
   }
   if (d[1].month == 11) {
       b = 30;
   }
   if (d[1].month == 12) {
       b = 31;
   }

   printf("일 차이 : %d", all+a-b);
   return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

   int *a = malloc(sizeof(int));
   int *b = malloc(sizeof(int));
   int cmp;
   
   scanf("%d %d",a,b);
   
   cmp = *a;
   *a = *b;
   *b = cmp;
   
   printf("%d %d\n",*a,*b);
   return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book{
   char title[20];
   char author[20];
   int born;
};

int main(int argc, const char * argv[]) {
   
   struct Book b[5];
   char aa[5][20];
   char bb[5][20];
   
   for (int i = 0; i<5; i++) {
       printf("제목");
       scanf("%s",aa[i]);
       printf("저자");
       scanf("%s",bb[i]);
   }
   for (int i = 0; i<5; i++) {
       strcat(b[i].title, aa[i]);
       strcat(b[i].author, bb[i]);
       printf("출판년도");
       scanf("%d",&b[i].born);
   }

   for (int i = 0; i<5; i++) {
       printf("책 제목 : %s,책 저자 : %s,출판 년도 : %d\n",b[i].title,b[i].author,b[i].born);
   }
   return 0;
}

백준 문제 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
   char aa[1000];
   int a;
   
   scanf("%s",aa);
   scanf("%d",&a);
   
   printf("%c",aa[a-1]);
   return 0;
}

백준 문제2
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
   
   char aa[1000];
   scanf("%s",aa);
   
   for (int i = 0; i<1000; i++) {
       if (aa[i] == '\0') {
           printf("%d",i);
           break;
       }
   }
   return 0;
}

백준 문제 3
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
   
   int a;
   scanf("%d",&a);
   
   char aa[a][1000];
   
   for (int i = 0; i<a; i++) {
       scanf("%s",aa[i]);
   }
   
   int c;
   
   for (int i = 0; i<a; i++) {
       c = strlen(aa[i]);
       printf("%c%c\n",aa[i][0],aa[i][c-1]);
       c = 0;
   }
   return 0;
}

백준 문제4
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
   
   char a;
   scanf("%c",&a);
   
   printf("%d",a);
   return 0;
}

백준 문제 5
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

   int a;
   scanf("%d",&a);

   char c[101];
   scanf("%s",c);
   
   int b = 0;
   for (int i = 0; i<a; i++) {
       b += c[i]-48;
   }
   printf("%d",b);
   return 0;
}

백준 문제 6
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
   char a[101];
   int all[26];
   
   scanf("%s",a);
   
   for (int i = 0; i<26; i++) {
       all[i] = -1;
   }
   
   
   for (int i = 0; i<strlen(a); i++) {
       int b = a[i] - 'a';
       
       if (all[b] == -1) {
           all[b] = i;
       }
   }
   
   for (int i = 0; i<26; i++) {
       printf("%d ",all[i]);
   }
   
   return 0;
}
