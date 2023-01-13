#include<stdio.h>
#include<windows.h>
int main()
{
    Sleep(1000);
char a[20],b[20];
   char x;
   x=219;
   //system("Color 7");
   printf("Nhap vao ten cua ban :");
   gets(a);
   printf("Nhap ngay sinh :");
   gets(a);
   printf("\t\t\t\t\t\t\t\t\t\t\tO hom nay la sinh nhat ban!");
   Sleep(2000);
   system("cls");
   printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tLOADING...\n\t\t\t\t\t\t\t\t\t");
   for(int i=0;i<=35;i++){
       printf("%c",x);
       if(x<=10){Sleep(70);}
       if(x>10 && x<=20){Sleep(30);}
       if(x>20){Sleep(10);}
   }
   system("cls");
char s[1000];
FILE* f = fopen("anh.txt", "r");
while (!feof(f))
 {
fgets(s, sizeof(s), f);
printf("%s", s);
Sleep(20);
}
}

//something
