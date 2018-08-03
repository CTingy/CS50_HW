#include <stdio.h>

int main(){
    FILE* pf_in;
    FILE* pf_out;
    char buffer[1024];
    pf_in = fopen("./in.txt", "rb");
    if(!pf_in){
        printf("open failed 1\n"); 
        return 0;
    }
    pf_out = fopen("./out.txt", "wb");
    if(!pf_out){
        printf("open failed 2\n"); 
        return 0;
    }
    while(!feof(pf_in)){
        fread(buffer, sizeof(char), 1024, pf_in);
        fwrite(buffer, sizeof(char), 1024, pf_out);
    }
    fclose(pf_in);
    fclose(pf_out);
    return 0;
}
