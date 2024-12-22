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
	printf("nhap gia tri muon them vao mang: ");
	scanf("%d",&valu);
	printf("nhap vi tri muon them vao mang: ");
	scanf("%d",&add);
	if(add<0){
		add=0;
	}else if(add>size){
		add=size;
	}
	for (int i= n-1;i>=add;i--){
		arr[i+1]=arr[i];
	}
	arr[add]=valu;
	n++; 
	for (int i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
