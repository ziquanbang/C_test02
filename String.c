
char* arr2str(char num[],int n){
    char *str=(char*)malloc(sizeof(char));
    *str = num[0];
    char *p=(str+1);
    int i;
    for(i=1;i<n;i++){
        p =(char*)malloc(sizeof(char));
        *p=(char)num[i];
        printf(*p);
        p++;
    }
    *p = "\0";
    return str;
}
