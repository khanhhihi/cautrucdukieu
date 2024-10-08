#include<stdio.h>
#include<stdlib.h>

struct nut{
	float gtri;
	struct nut* tiep; 
}; 
typedef struct nut Node;
// ham tim so am lon nhat 
float maxAm(Node* dau, int *kq){
	float max = -1; //khoi tao gia tri thao nhat
	Node*tam = dau;
	// duyet qua danh sach de tim so am lon  
	while(tam!=NULL && tam->gtri > max){
		tam = tam->tiep; 
		if(tam->gtri < 0  && tam ->gtri > max){
			max = tam ->gtri;
		} 
		tam = tam->tiep;
	}  
	return max; 
} 
int main(){
	Node* DSsothuc = NULL;
	int kq;
	 
	// them du lieu va kiem tra 
	themNut(&DSsothuc, -);
	themNut(&DSsothuc, -4.5);
	 
	printf("So am lon nhat: %.2f\n",maxAm); 

} 
