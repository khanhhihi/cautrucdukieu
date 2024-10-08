#include<stdio.h>
#include<stdlib.h>
//tao danh sách liên kêt 
struct nut {
	float gtri;
	struct nut * tiep; 
};
typedef struct nut Node;
//hàm de tìm so duong nho nhat trong danh sach 
float timSD(Node*dau, int *kq){	
	kq=0; // khoi tao bien ket qua 
	float min =-1;// giab tri mac dinh neu khong tim thay so duong 
	Node*tam ;
	 tam= dau;// bien tam de duyet danh sach
	// kiem  tra danh sach rong 
	if(tam == NULL){
	return min; 
	} 
// duyet de tim so duong dau tien 
	while(tam!=NULL && tam->gtri<=0){
	tam = tam->tiep;
	}
// co so duong dau tien 
if(tam!=NULL){
	min = tam->gtri;// gan gia tri dau tien 
	*kq=1; // danh dau da tim thay so duong 
} 
// duyet de tim so duong nho nhat 
while(tam!=NULL){
	if(tam->gtri < min && tam ->gtri>0){
		min = tam ->gtri;
	}
	tam= tam->tiep; 
} 
return min;
// ham chinh de kiem tra 
}
int main(){
	Node*dau = NULL;
	int kq; 
	// them nut vao danh sach (tu lam)
	
	float SDnhonhat = timSD(dau, &kq);
	if(kq){
		printf("So duong nho nhat la:%.2f\n", SDnhonhat);
	} else{
		printf("Khong co so duong nho nhat!\n"); 
	} 
	return 0; 
}	
