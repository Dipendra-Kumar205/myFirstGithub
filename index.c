#include <stdio.h>

int main() {
    int arr[7] = {10,20,30,40,50,60,70};
    int s = 0;
    int e = 6;
    int x;
    int k = 3;
    // scanf("%d", &k);
    while (s<e){
        x = arr[s];
        arr[s] = arr[e];
        arr[e] = x;
        s++; //s = s+1
        e--; //e = e-1
    }
    int y = k-1;
    s = 0;
    while(s<y){
        x = arr[s];
        arr[s] = arr[y];
        arr[y] = x;
        s++;
        y--;
    }
    e = 6;
    while(k<e){
        x = arr[k];
        arr[k] = arr[e];
        arr[e] = x;
        k++;
        e--;
    }
    
    for(int i = 0;i < 7;i++){
        printf("%d ", arr[i]);
    }
    

    return 0;
}