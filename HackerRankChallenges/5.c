#include<stdio.h>
#include<math.h>

void update(int* a,int* b){
    
    int sum,diff;
    sum = *a + *b;
    diff = abs(*a - *b);
    *a = sum;
    *b = diff;
    
}

int main() {
    
    int a,b;
    scanf("%d %d",&a,&b);
    update(&a,&b);
    printf("%d\n%d",a,b);
    return 0;
    
}
