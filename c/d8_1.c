#include <stdio.h>

int main(){
    char name[30], phone[30], mail[30];
    
    FILE* pf_in;
    pf_in = fopen("./in.txt", "r");
    if(!pf_in){
        printf("open failed 1\n"); 
        return 0;
    }
    while (fscanf(pf_in, "%s\t%s\t%s", name, phone, mail)!=EOF){
        printf("%s\t%s\t%s\n", name, phone, mail);
    }
    
    fclose(pf_in);
    return 0;
}
