#include<bits/stdc++.h>
#define C(a, b) (a & b)
#define D(a, b) (a | b)
#define I(a, b) (!a | b)
#define E(a, b) (!(a ^ b))
#define N(a) (!a)
using namespace std;

void test_and_set(map<char, int> &mp, int val) {
	for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		it->second = val % 2;
		val /= 2;
	}
}

int main() {
	int t,len;
    string input;
    cin >> input;
    len = input.size();
    map<char, int> var;
    for (int i = 0; i < len; i++) {
        if (islower(input[i]))
            var[input[i]] = 0;
    }
    int bound = 1 << var.size();
    bool flag = true;
    for (int i = 0; i < bound; i++) {
        test_and_set(var, i);
        stack<int> stk;
        for (int j = len - 1; j >= 0; j--) {
            if (islower(input[j]))
                stk.push(var[input[j]]);
            else {
                int v1, v2;
                v1 = stk.top();
                stk.pop();
                if (input[j] != 'N') {
                    v2 = stk.top();
                    stk.pop();
                }
                switch (input[j]) {
                    case 'C':
                        stk.push(C(v1, v2));
                        break;
                    case 'D':
                        stk.push(D(v1, v2));
                        break;
                    case 'I':
                        stk.push(I(v1, v2));
                        break;
                    case 'E':
                        stk.push(E(v1, v2));
                        break;
                    case 'N':
                        stk.push(N(v1));
                        break;
                    default:
                        cout << "output Invalid" << endl;
                }
            }
        }
        int result = stk.top();
        if (result == 0) {
            cout << "NO" << endl;
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    return 0;
}
