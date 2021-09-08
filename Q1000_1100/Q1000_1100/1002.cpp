//#include<iostream>
//#include<math.h>
//
//using namespace std;
//
//int main(void) {
//	int count = 0;
//	cin >> count;
//	for (int i = 0; i < count; i++) {
//		int x1, x2, y1, y2, r1, r2, dist;
//		int result = 0;
//		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
//		dist = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
//		if (dist < (r1 + r2)* (r1 + r2)) {
//			int temp = r1 > r2 ? r1 : r2;
//			int min = r1 > r2 ? r2 : r1;
//			if (x1 == x2 && y1 == y2 && r1 == r2)
//				result = -1;
//			else if (dist < (temp - min) * (temp - min))
//				result = 0;
//			else if (dist == (temp - min) * (temp - min))
//				result = 1;
//			else
//				result = 2;
//		}
//		else if (dist == (r1 + r2) * (r1 + r2))
//			result = 1;
//		else
//			result = 0;
//		cout << result << endl;
//	}
//	return 0;
//}
