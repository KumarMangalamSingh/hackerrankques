#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int j,i,maxand=0,maxor=0,maxxor=0;
  for(i=1;i<=n;i++){
      for(j=i+1;j<=n;j++){
        if((i&j)>maxand && (i&j)<k){
           maxand=(i&j);   
          }
          if((i|j)>maxor && (i|j)<k){
              maxor=(i|j);
          }
          if((i^j)>maxxor && (i^j)<k){
              maxxor=(i^j);
          }
      }
  }
  printf("%d\n",maxand);
  printf("%d\n",maxor);
  printf("%d",maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
