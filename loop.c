#include<stdio.h>
void DrawBlock(int w,int l,char ch);
void DrawLine(int width,char p);

int main(){
int length,width;
char character;

printf("Enter the width of the box:");
scanf("%d",&width);
printf("Enter the length of the box:");
scanf("%d",&length);
printf("Enter the character you want to use:");
scanf(" %c",&character);

DrawBlock(width,length,character);

    return 0;
}

void DrawLine(int width,char p){
    for(int i=1; i<=width; i++){
        printf("%c",p);
    }
    printf("\n");
}

void DrawBlock(int w,int l,char ch){
    for(int x=1; x<=l; x++){
        DrawLine(l,ch);
    }
}