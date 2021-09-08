//#include<iostream>
//#include<math.h>
//
//using namespace std;
//
//int main(void) {
//	int count = 0;
//	cin >> count;
//	for (int o = 0; o < count; o++) {
//		int x1, x2, y1, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		int result = 0;
//		int planet_num = 0;
//		cin >> planet_num;
//		for (int w = 0; w < planet_num; w++) {
//			int cx, cy, r;
//			cin >> cx >> cy >> r;
//			int f_dist = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
//			int s_dist = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);
//			if ((f_dist < r * r && s_dist>r * r) || (f_dist > r * r && s_dist < r * r))
//				result++;
//		}
//		cout << result << endl;
//	}
//	return 0;
//}
