#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
class Matrix_fun
{
	int i,j;
	int mat[3][3];	
	public:
		void create_matrix();
	  	void display_matrix();
	 friend	 Matrix_fun add_matrices(Matrix_fun  a,Matrix_fun b);
};
void Matrix_fun :: create_matrix()
{
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\nElement at position ["<<i<<"]["<<j<<"] is: ";
			cin>>mat[i][j];
		}
			
	}
	
}
void Matrix_fun :: display_matrix()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	
}
Matrix_fun add_matrices(Matrix_fun a,Matrix_fun b)
{
	Matrix_fun temp;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			temp.mat[i][j]=a.mat[i][j]+b.mat[i][j];
		}
						
	}
	return temp;
}
main()
{
	Matrix_fun m1,m2,s;
	cout<<"Enter element into Ist(3x3)Matrix:\n";
	m1.create_matrix();
	cout<<"Display element into Ist(3x3)Matrix:\n";
	m1.display_matrix();
	
	cout<<"Enter element into IInd(3x3)Matrix:\n";
	m2.create_matrix();
	cout<<"Display element into IInd(3x3)Matrix:\n";
	m2.display_matrix();
	
	s=add_matrices(m1,m2);
	cout<<"Display Sum of Ist & IInd(3x3)Matrix:\n";
	s.display_matrix();
}
