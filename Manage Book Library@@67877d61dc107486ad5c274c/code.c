#include<stdio.h>
#include<string.h>
 struct{
    char title[100];
    char author[100];
    float price;
}book;
int main(){
    int n;
    scanf("%d",&n);
    book books[200];
    for(int i=0;i<n;i++){
        scanf("%s %s %f",books[i].title,books[i].author,books[i].price);
    }
    int th;
    scanf("%.2f",&th);
    for(int i=0;i<n;i++){
        if(book[i].price>th){
            printf("%s %s %f",books[i].title,books[i].author,books[i].price);
        }
    }
}