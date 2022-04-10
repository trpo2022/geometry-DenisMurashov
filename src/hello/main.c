#include <ctype.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

const int N = (int)1e5 + 1;

string str;
int a[N];

int main(int argc, char** argv)
{
    FILE* x;
    char pszTest[150];
    x = fopen("x.txt", "r");
    while (fgets(pszTest, 149, x)) {
        printf("%s\n", pszTest);

        int iCnt = 0;
        int iCnt1 = 0;
        int iCnt2 = 0;
        int iQ = 0;
        int Q = 0;
        int Q1 = 0;
        int Zap = 0;
        int m = 0;
        int T = 0;
        int T1 = 0;
        int q = 0;
        int q1 = 0;
        int CH = 0;
        int k = 0;

        int F = 0;
        int F1 = 0;
        int F2 = 0;

        int idx = 0;
        if (!pszTest || !*pszTest) {
            return -1;
        }

        for (int i = 0; pszTest[i]; ++i) {
            for (int j = 0; j <= 1; j++) {
                if (pszTest[i] == 'c') {
                    F++;
                }
            }
            if (F > 0) {
                if (isalpha(pszTest[i])) {
                    iCnt++;
                }
                if (isdigit(pszTest[i]) || pszTest[i] == '-') {
                    if (isdigit(pszTest[i])) {
                        str += pszTest[i];
                        for (int j = 0; j < str.length(); j++) {
                            int STR = stoi(str);
                            a[idx++] = STR;
                            str = "";
                        }
                    }
                    if (pszTest[i] == '-') {
                        str += pszTest[i];
                    }
                }
            }

            for (int j = 0; j <= 1; j++) {
                if (pszTest[i] == 't') {
                    F1++;
                }
            }
            if (F1 > 0) {
                if (isalpha(pszTest[i])) {
                    iCnt1++;
                }
                if (isdigit(pszTest[i]) || pszTest[i] == '-') {
                    if (isdigit(pszTest[i])) {
                        str += pszTest[i];
                        for (int j = 0; j < str.length(); j++) {
                            int STR = stoi(str);
                            a[idx++] = STR;
                            str = "";
                        }
                    }
                    if (pszTest[i] == '-') {
                        str += pszTest[i];
                    }
                }
            }
            for (int j = 0; j <= 1; j++) {
                if (pszTest[i] == 'p') {
                    F2++;
                }
            }
            if (F2 > 0) {
                if (isalpha(pszTest[i])) {
                    iCnt2++;
                }
                if (isdigit(pszTest[i]) || pszTest[i] == '-') {
                    if (isdigit(pszTest[i])) {
                        str += pszTest[i];
                        for (int j = 0; j < str.length(); j++) {
                            int STR = stoi(str);
                            a[idx++] = STR;
                            str = "";
                        }
                    }
                    if (pszTest[i] == '-') {
                        str += pszTest[i];
                    }
                }
            }

            if (isdigit(pszTest[i])) {
                if (isalpha(pszTest[i - 1]) || isalpha(pszTest[i + 1])) {
                    CH++;
                }
            }

            if (pszTest[i] == '(') {
                q++;
                if (isdigit(pszTest[i - 1]) || !isdigit(pszTest[i + 1])) {
                    Q++;
                }
            }
            if (pszTest[i] == ',') {
                if (!isdigit(pszTest[i - 1]) || !isdigit(pszTest[i + 1]))
                    Zap++;
            }
            if (pszTest[i] == ')') {
                q1++;
                if (!isdigit(pszTest[i - 1]) || isdigit(pszTest[i + 1])
                    || isalpha(pszTest[i + 1])) {
                    Q1++;
                }
            }
            if (pszTest[i] == '.') {
                if (!isdigit(pszTest[i - 1]) || !isdigit(pszTest[i + 1])) {
                    T++;
                }
            }
        }
    }
    fclose(x);
    return 0;
}
