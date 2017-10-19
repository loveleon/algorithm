#include <iostream>

using namespace std;

int calculate_recurs(int m)  // recursive 递归
{
	if (m == 0) return 0;
	if (m > 0) return calculate_recurs(m - 1) + m;
}

/*
int main(int argc, char *argv[]) {
        int m = 3;
        int sum = calculate_recurs(m);
        cout << "sum :" << sum << endl;
        return 0;
}*/