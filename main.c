#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    // char*    pszTest = "circle(5 2,2 9)";

    FILE* x;
    char pszTest[150];
    x = fopen("x.txt", "r");
    while (fgets(pszTest, 149, x)) {
        printf("%s", pszTest);

        int iCnt = 0;
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

        if (!pszTest || !*pszTest) {
            // Nothing to do
            return -1;
        }

        for (int i = 0; pszTest[i]; ++i) {
            /*if (pszTest[i] == 'c' || pszTest[i] == 'i' || pszTest[i] == 'r'
                || pszTest[i] == 'l' || pszTest[i] == 'e') {
                ++iCnt;

            }
            else{
                iQ++;
            }*/

            if (isalpha(pszTest[i])) {
                iCnt++;
            }

            if (isdigit(pszTest[i])) {
                if (isalpha(pszTest[i - 1]) || isalpha(pszTest[i + 1])) {
                    CH++;
                }
                /*if (ispunct(pszTest[i - 1]) || ispunct(pszTest[i + 1])) {
                    CH++;
                }*/
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

        iCnt = iCnt - CH;
        if (iCnt > 6 || iCnt < 6) {
            printf("Error at column 0: expected 'circle', 'triangle' or "
                   "'polygon'\n\n");
        }
        if (CH > 0) {
            printf("Error at column 7: expected '<double>'\n\n");
        }
        if (q == 0 || q1 == 0) {
            printf("Error at column 15: expected ')' or '('\n\n");
        }
        if (Q1 >= 1) {
            printf("Error at column 15: expected ')' or Error at column 19: "
                   "unexpected token\n\n");
        }
        if (Q >= 1) {
            printf("Error at column 15: expected '('\n\n");
        }
        if (T >= 1) {
            printf("Error at column 21: expected '.'\n\n");
        }
        if (Zap >= 1) {
            printf("Error at column 20: expected ','\n\n");
        }
        /*if (iCnt > 6 || Q > 1 || Q1 > 1 || Zap > 1 || T > 0) {
            printf("ERROR\n");
        } else {
            printf("OK\n");
        }*/
    }
    fclose(x);
    return 0;
}