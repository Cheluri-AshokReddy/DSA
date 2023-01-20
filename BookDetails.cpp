#include<stdio.h>
#include<string.h>
struct Book
{
  char title[100];
  char  author[100];
  int pages;
  int price;
};
void input(struct Book *book){
	printf(" entre the title of the book\n");
	gets(book->title);
	printf("entre author of the book\n");
	gets(book->author);
	printf("entre no of pages in the book\n");
	scanf("%d",&book->pages);
	printf("entre the price of the book\n");
	scanf("%d",&book->price);
}
void display( struct Book *book)
{
	printf("title :%s\n",book->title);
	printf("author: %s\n",book->author);
	printf("pages:%d\n",book->pages);
	printf("price :%d\n",book->price);
	
}
int main()
{
struct Book book;
input( &book);
display( &book);
}
   

