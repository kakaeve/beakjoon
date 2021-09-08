//#include<iostream>
//#include<math.h>
//
//#define MAX 40
//
//using namespace std;
//
//int main(void) {
//	int count = 0;
//	int arr[MAX + 1][2] = { 0, };
//	arr[0][0] = 1;
//	arr[0][1] = 0;
//	arr[1][0] = 0;
//	arr[1][1] = 1;
//	for (int j = 2; j < MAX + 1; j++) {
//		arr[j][0] = arr[j - 1][1];
//		arr[j][1] = arr[j - 1][1] + arr[j - 2][1];
//	}
//	cin >> count;
//	for (int i = 0; i < count; i++) {
//		int num;
//		cin >> num;
//		cout << arr[num][0] << " " << arr[num][1] << endl;
//	}
//	return 0;
//}
//
