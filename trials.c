#include<stdio.h>
int ReadVal();
float Convert(int F);
float printResult(int f,float c);

int main(){
    int EndValue = ReadVal();
    float celicius;
    
    printf("\n          F          C\n");
    for(int F=50; F<=EndValue; F++){
    celicius = Convert(F);
    printResult(F,celicius);
    }
return 0;
}

int ReadVal(){
    int EndVal;
    printf("Enter the last value you want to convert:");
    scanf("%d",&EndVal);
    return EndVal;
}

float Convert(int F){
int C = (F-32)/1.8;
return C;
}

float printResult(int f, float c){
    printf("%10.2d %10.2f\n",f,c);
}
