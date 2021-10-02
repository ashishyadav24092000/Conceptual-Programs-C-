#include<iostream>
using namespace std;
class Matrix
{
	protected:
	int a[3][3];
	int i,j;
	public:
		void createMat();
		Matrix multipleMat(Matrix);
		void showMat();
	
};
void Matrix :: createMat()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
			
		}
	}
}
Matrix multipleMat(Matrix aa, Matrix bb)
{
	
	int i,j,k;
	Matrix temp;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			temp.a[i][j] = 0;
			for(k=0;k<3;k++)
			{
				temp.a[i][j]+=aa.a[i][k]*bb.a[k][j];
			}
			//cout<<temp.res[i][j];
		}
				
	}
	return temp; 
}
void  Matrix :: showMat()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
main()
{
	Matrix m1,m2,mul;
	cout<<"create 1st  2-D matrix  enter numbers"<<endl;
	m1.createMat();
	cout<<"create IInd 2-D matrix  enter numbers"<<endl;
	m2.createMat();
	cout<<"1st 2-D matrix  :"<<endl;
	m1.showMat();
	cout<<"IInd 2-D matrix  :"<<endl;
	m2.showMat();
	cout<<"show 1st and 2nd matrix and multiple matrix:"<<endl;
	mul=m1.multipleMat(m1);
	mul.showMat();
}
