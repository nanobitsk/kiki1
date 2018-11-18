#include <stdio.h>
#include <stdlib.h>

struct zaznam{
    char meno[51];
    char p;
    int rn;
    char spz[8];
    int pr;
    int sum;
    int date;
};


void o_call(struct zaznam rec[]){
    char s;
    int n;
    FILE *f;
    f = fopen("priestupky.txt","r");
 

  while(!feof(f))

    for(n=0 ; n<7; n++){
    fgets(rec[n].meno,51,f);
    //printf("%s",rec[n].meno);
    rec[n].p = fgetc(f);
    //printf("%c \n",rec[n].p);
    fscanf(f,"%d",&rec[n].rn);
    //printf("%d \n",rec[n].rn);
    fscanf(f,"%s",&rec[n].spz);
    //printf("%s \n",rec[n].spz);
    fscanf(f,"%d",&rec[n].pr);
    //printf("%d \n",rec[n].pr);
    fscanf(f,"%d",&rec[n].sum);
    //printf("%d \n",rec[n].sum);
    fscanf(f,"%d",&rec[n].date);
    //printf("%d \n",rec[n].date);
    s = fgetc(f);
	s = fgetc(f);
	//printf("\n");
    }
    fclose(f);

}

void v_call(){
	char s;
	int n;
    //FILE *f;
    //f = fopen("priestupky.txt","r");
    for(n=0 ; n<7; n++){
    //fgets(rec[n].meno,51,f);
    printf("%s",rec[n].meno);
    //rec[n].p = fgetc(f);
    printf("%c \n",rec[n].p);
    //fscanf(f,"%d",&rec[n].rn);
    printf("%d \n",rec[n].rn);
    //fscanf(f,"%s",&rec[n].spz);
    printf("%s \n",rec[n].spz);
    //fscanf(f,"%d",&rec[n].pr);
    printf("%d \n",rec[n].pr);
    //fscanf(f,"%d",&rec[n].sum);
    printf("%d \n",rec[n].sum);
    //fscanf(f,"%d",&rec[n].date);
    printf("%d \n",rec[n].date);
    //s = fgetc(f);
	//s = fgetc(f);
	printf("\n");
    }
    fclose(f);
}


int main()
{
    struct zaznam rec[7]
    char c,o,m;
    while (1)
    {
        scanf("%c",&c);
        switch (c)
        {
            case 'o':
                o_call(rec);
                break;
            case 'v':
                v_call(rec);
                break;
        }
    } 
	getchar();
	getchar();
    return 0;

}


