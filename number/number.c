#include <stdio.h>
int main(){
    double num1=0.0003,num2,num3;
    int num4;
    while(1){
         printf("���� ���� ���� �����ÿ�\n");
        scanf("%lf %lf",&num2,&num3);
        printf("%lf",(num1*num2*num3));
        printf("�����Ϸ��� 0�� �ƴϸ� 1�� �Է�\n");
        scanf("%d",&num4);
        if(num4==0){
            break;
        }
    }
    return 0;
}
