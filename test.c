#include<stdio.h>
#include<windows.h>
int main()
{
int a ;
char s[1000];
FILE* f = fopen("anh.txt", "r");
while (!feof(f))
 {
fgets(s, sizeof(s), f);

}
}

//something
