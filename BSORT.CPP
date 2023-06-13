#include"iostream.h"
#include"conio.h"
#include"stdlib.h"
class LIST
{
	int *A,size;
      public:
	LIST(int);
	void SET_LIST();
	void BUBBLE_SORT();
	void VIEW_LIST();
};
LIST::LIST(int par)
{
	size = par;
	A = new int[size + 1];
}
void LIST::SET_LIST()
{
	cout<<endl<<"Enter the list elements: ";
	for(int i=1;i<=size;i++)
	       //cin>>A[i];
	       A[i]=random(1000);
}
void LIST::BUBBLE_SORT()
{
	for(int i=1;i<size-1;i++)
		for(int j=1;j<size-1;j++)
			if(A[j] > A[j+1])
			{
				int temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
}
void LIST::VIEW_LIST()
{
	cout<<endl<<"List elements are: ";
		for(int i=1;i<=size;i++)
			cout<<A[i]<<" ";
}
void main()
{
	int n;
	clrscr();
	cout<<endl<<"Enter size of array: ";
	cin>>n;
	LIST s(n);
	s.SET_LIST();
	cout<<endl<<"List before sorting: ";
	s.VIEW_LIST();
	s.BUBBLE_SORT();
	cout<<endl<<"List after sorting: ";
	s.VIEW_LIST();
	getch();
}