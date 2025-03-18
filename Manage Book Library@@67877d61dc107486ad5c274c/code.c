#include<stdio.h>
#include<string.h>
 struct book{
    char title[100];
    char author[100];
    float price;
};
int main(){
    int n;
    scanf("%d",&n);
    struct book books[200];
    for(int i=0;i<n;i++){
        scanf("%.99s %.99s %f",books[i].title,books[i].author,books[i].price);
    }
    int th;
    scanf("%.2f",&th);
    for(int i=0;i<n;i++){
        if(books[i].price>th){
            printf("%.99s %.99s %f",books[i].title,books[i].author,books[i].price);
        }
    }
}