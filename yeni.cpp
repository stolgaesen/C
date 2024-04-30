#include <iostream>
using namespace std;
int main() {
 int n1, n2 = 0, n3 = 0;
 int list1[]={3,4,5,6,8,12,45};
 n1=sizeof(list1)/sizeof(int);
 cout<<"n1:"<<n1<<endl;

 for (int i = 0; i < n1; i++)
 {
 if (list1[i] > 5 || list1[i] % 3 == 0) n2++;
 }

 cout<<"n2:"<<n2<<endl;
 // Filter list1 into list2
 int list2[n2];
 int k=0;
 for (int i = 0; i < n1; i++)
 {
 if (list1[i] > 5 || list1[i] % 3 == 0) {
 list2[k] = list1[i];
 k++;
 }
 }
 cout<<"list2";
 for (int i = 0; i < n2; i++) cout << "-"<<list2[i];
 cout<<endl;
 // Concatenate list2 and list1 into list3
 int list3[n1 + n2];
 k=0;
 for (int i = 0; i < n2; i++)
 {
 list3[k] = list2[i];
 k++;
 }
 for (int i = 0; i < n1; i++)
 {
 list3[k] = list1[i];
 k++;
 }
 // Print list3
 cout<<"list3";
 for (k = 0; k < n1+n2; k++) cout <<"-"<<list3[k];
 return 0;
}
