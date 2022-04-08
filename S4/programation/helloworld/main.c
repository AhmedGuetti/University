#include <stdio.h>
#include <string.h>
#include <inttypes.h>

const char* message = "Hello World";
#define HIST_CAP 256  
size_t hist[HIST_CAP] = {0};
#define TABLE_CAP 64
char table[TABLE_CAP] = {0};
size_t table_sz = 0;
#define IDX_CAP 64
size_t idx[IDX_CAP] = {0};
size_t idx_sz = 0;



int main(){

    float pi = 3.14159;
    long long piAsRawData = *(long long*)&pi;
printf("%l",piAsRawData);



    size_t message_sz = strlen(message);
    for(int i = 0;i < message_sz;++i){
        hist[message[i]]++;
    }
    for(int i = 0;i < HIST_CAP;++i){
        if(hist[i] > 0){
            table[table_sz++] = (char) i;
        }
    }

    for(int i = 0;i < message_sz;++i){
        for(int j = 0;j < table_sz;++j){
            if(table[j] == message[i]){
                idx[idx_sz++] = j;
            }
        }
    }
    table[table_sz++] = '\0';
    printf("messsage \"%s\"\n", message);
    printf("table \"%s\"\n", table);
    printf("Indecies{");
    for(int i = 0; i < idx_sz;++i){
        if(i>0) printf(", ");
        printf("%zu",idx[i]);
    }
    printf("}\n");
    printf("Table64 : %"PRIX64"\n",*(uint64_t*) table);
    


    return 0;
}