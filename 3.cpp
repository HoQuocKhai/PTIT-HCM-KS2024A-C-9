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
	int size=n,deletevalu;
	printf("nhap vi tri muon xoa trong mang: ");
	scanf("%d",&deletevalu);
	if(deletevalu<=0||deletevalu>size-1){
		printf("vi tri khong hop le");
	}
	for (int i= deletevalu;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--; 
	for (int i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
