#include<stdio.h>
int main(){
    int n,k,a[100],i,p=1,pageno=0,j,count=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        pageno=pageno+1;
        j=1;
        while(a[i]>0){
            a[i]--;
            if(j==pageno){
                count=count+1;
            }
            if(j%k==0 && a[i]!=0){
                pageno=pageno+1;
            }
            j++;

        }
        
    }
    
 printf("%d",count);
    return 0;

}
