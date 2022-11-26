#include <iostream>
#include <cstdio>
#include <string>
#define NUM 10

using namespace std;

void copy(int* a, int* b, int num){
	for(int i = 0; i < num; i++)
		b[i] = a[i];
}

void printSort(int* a, int num, string nameofSort){
	cout << nameofSort << endl;
	for(int i = 0; i < num-1; i++) cout << a[i] << '-';
	cout << a[num-1];
	cout << endl;
}

void InsertSort(int* a, int num){ 
	int i,j,guard;
	for(i = 1; i < num; ++i){
		if(a[i] < a[i-1]){
			guard = a[i];
			for(j = i - 1; guard < a[j] && j >= 0; j--)
			       a[j+1] = a[j];
			a[j+1]= guard;
		}	
	}
}

void ShellSort(int* a, int n){
	int i,j,k,temp,dk;
	for(dk = n/2; dk >= 1 ; dk = dk / 2){
		for(i = dk; i < n; i++){
			temp = a[i];
			if(a[i-dk] > a[i]){
				for(j = i - dk; j >= 0 && temp < a[j]; j -= dk)
					a[j+dk] = a[j];
			a[j+dk] = temp;
			}
		}
	}
}

void BubbleSort(int *a, int n){
	for(int i = 0; i < n; i++){
		for(int j = n - 1; j > i; j--){
			if(a[j-1] > a[j]){
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
}

int Partition(int *a, int low, int high){
	int pivot = a[low];
	while(high > low){
		while(high > low && a[high] >= pivot) high--;
		a[low] = a[high];
		while(high > low && a[low] <= pivot) low++;
		a[high] = a[low];
	}
	a[low] = pivot;
	return low;
}

void QuickSort(int* a, int low, int high){
	if(low < high){
		int pivotpos = Partition(a,low,high);
		QuickSort(a, low, pivotpos - 1);
		QuickSort(a, pivotpos + 1, high);
	}
}

void Swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void SelectSort(int* a, int n){
	int i,j,min;
	for(i = 0; i < n; i++){
		min = i;
		for(j = i; j < n; j++) 
			if(a[j] <  a[min]) min = j;
		if(min!=i)Swap(a[i], a[min]);

	}
}


void HeadAdjust(int *a, int k, int len){
	int temp;
	temp = a[k];
	for(int i = 2*k; i < len; i *= 2){
		if(i < len-1 && a[i] < a[i+1]) i++;
		if( temp >= a[i]) break;
		else{a[k] = a[i]; k = i;}
	}
	a[k] = temp;
}

void BuildMaxHeap(int *a, int len){
	for(int i = len/2; i>0; i--)
		HeadAdjust(a,i,len);
}

void HeapSort(int *a, int len){
	BuildMaxHeap(a,len);
	for(int i=len-1; i > 0; i--){
		Swap(a[i],a[0]);
		HeadAdjust(a,0,i-1);
	}
}

int* B = new int[NUM];
void Merge(int *A, int low, int mid, int high){
	copy(A, B, NUM);
	int i, j, k;
	for(i = low, j=mid+1,k=i; i<=mid && j <= high; k++){
		if(B[i] <= B[j]) A[k] = B[i++];
		else A[k] = B[j++];
	}//for
	while(i<=mid) A[k++] = B[i++];
	while(j<=high) A[k++] = B[j++];

}

void MergeSort(int *A, int low, int high){
	if(low < high){
		int mid = (low + high) / 2;
		MergeSort(A,low,mid);
		MergeSort(A,mid+1,high);
		Merge(A,low,mid,high);
	}//if
}


int main(int argc, char* argv[]){
	int a[NUM] = {9,1,0,2,5,6,3,4,8,7};
	int b[NUM];
	copy(a,b,NUM);
	printSort(b,NUM, "Unsort: ");

	InsertSort(b, NUM);
	printSort(b, NUM, "InsertSort: ");
	copy(a,b,NUM);

	ShellSort(b, NUM);
	printSort(b,NUM, "ShellSort: ");
	copy(a,b,NUM);
	
	BubbleSort(b,NUM);
	printSort(b,NUM, "BubbleSort: ");
	copy(a,b,NUM);

	QuickSort(b,0,NUM-1);
	printSort(b,NUM, "QuickSort: ");
	copy(a,b,NUM);

	SelectSort(b,NUM);
	printSort(b,NUM,"SelectSort: ");
	copy(a,b,NUM);

	HeapSort(b,NUM);
	printSort(b,NUM,"HeapSort: ");
	copy(a,b,NUM);

	MergeSort(b,0,NUM-1);
	printSort(b,NUM,"MergeSort: ");
	copy(a,b,NUM);


	return 0;
}
