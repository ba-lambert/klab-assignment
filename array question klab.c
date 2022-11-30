#include<stdio.h>
#include<string.h>
struct products{
	char name[30];
	int price;
};
int main(){
	int i;
	struct products p1={"Bike",100};
	struct products p2={"TV",200};
	struct products p3={"Albam",10};
	struct products p4={"Book",5};
	struct products p1={"Phone",500};
	struct products p1={"Compute",1000};
	for(i=0;i<=7;i++){
	    if(p[i].price>p[i+1].price){
	        printf("You can buy the this product");
	    }
	}
	return 0;
}
