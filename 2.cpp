#include<stdio.h>

int main(){
	int MAX_size=100;
	int arr[MAX_size],n;
	printf("nhap so luong phan tu trong mang: ");
	scanf("%d",&n);
	for (int i=0; i<n; i++){
		printf("nhap phan tu co index[%d]: ",i);
		scanf("%d",arr+i);
	}
	int size=n,add,valu;
	printf("nhap gia vi tri muon sua vao mang: ");
	scanf("%d",&add);
	printf("nhap gia tri muon sua vao mang: ");
	scanf("%d",&valu);
	if(add<0||add>size){
		printf("vi tri khong ton tai ");
		return 0; 
	}
	arr[add]=valu;
	for (int i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
