#include<stdio.h>
long long int LCM(long long int ,long long int );
long long int HCF(long long int ,long long int );
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        long long int N,A,B,K;
        scanf("%lld %lld %lld %lld",&N,&A,&B,&K);
        //at least K sums to be done by both together
        long long int min=A,max=B;
        if(A>B){
            min=B;
            max=A;
        }
        long long int L=LCM(min,max);
        long long int num_by_cheff,num_by_appy;
        num_by_cheff=(int)N/A-(int )N/L;
        num_by_appy=((int)N/B-(int )N/L);
        if((num_by_appy+num_by_cheff)>=K){
            printf("Win
");
        }
        else{
            printf("Lose
");
        }
    }
    return 0;
}
long long int LCM(long long int A,long long int B){
    long long int H=HCF(A,B);
    return (A*B)/H;
}
long long int HCF(long long int A,long long int B){
    if(B!=0){
        return HCF(B,A%B);
    }
    else{
        return A;
    }
}