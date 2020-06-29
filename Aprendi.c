#include <stdio.h>
#define tam 2000
int main(){
    int i, j, a, b, v[tam], w[tam], t[tam], k=0;
    while(scanf("%d%d", &a, &b)!=EOF){
        k++;
        if(k!=1)printf("\n");
        for(i=0;i<a+1;i++){
            scanf("%d", &v[i]);
        }
        for(i=0;i<b+1;i++){
            scanf("%d", &w[i]);
        }
        for(i=0;i<b+a+1;i++){
            t[i]=0;
        }
        for(i=0;i<a+1;i++){
            for(j=0;j<b+1;j++){
            t[i+j]=t[i+j]+v[i]*w[j];
            }
        }
        printf("Caso #%d: ", k);
        for(i=0;i<a+b+1;i++){printf("%d", t[i]);if(i!=a+b)printf(" ");}
        
}
    return 0;
}