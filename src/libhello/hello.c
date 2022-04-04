#include<1ibhello/hello.h>
void Circle(int F, int CH, int iCnt, int T, int Zap)
{
    if (F > 0) 
    {
        int err = 0;

        if (CH == 0) {
            iCnt = iCnt - CH;
            if (iCnt > 6 || iCnt < 6) {
                printf("Error at column 0: expected 'circle', 'triangle' "
                       "or "
                       "'polygon'\n\n");
                err++;
            }
        }

        if (T >= 1) {
            printf("Error at column 21: expected '.'\n\n");
            err++;
        }
        if (Zap >= 1) {
            printf("Error at column 20: expected ','\n\n");
            err++;
        }
        if (CH >= 1) {
            printf("Error at column 7: expected '<double>'\n\n");
            err++;
        }

        if (err == 0) {
            double Area = 3.14 * pow(a[2], 2);
            cout << "Area: " << Area << "\n";
            double perimeter = 2 * 3.14 * a[2];
            cout << "Perimeter: " << perimeter << "\n\n";
        }
        cout << "--------------------------------------------------------------"
                "--------------------\n";
    }
}

void Triangle(int F1, int CH, int iCnt1, int T, int Zap)
{
    if (F1 > 0) {
        int err = 0;
        if (CH == 0) {
            iCnt1 = iCnt1 - CH;
            if (iCnt1 > 8 || iCnt1 < 8) {
                printf("Error at column 0: expected 'circle', 'triangle' "
                       "or "
                       "'polygon'\n\n");
                err++;
            }
        }
        if (T >= 1) {
            printf("Error at column 21: expected '.'\n\n");
            err++;
        }
        if (Zap >= 1) {
            printf("Error at column 20: expected ','\n\n");
            err++;
        }
        if (CH > 1) {
            printf("Error at column 7: expected '<double>'\n\n");
            err++;
        }

        if (err == 0) {
            double Area = sqrt(pow((a[0] - a[2]), 2) + pow((a[1] - a[3]), 2));
            cout << "Area: " << Area << '\n';

            double SideAB = sqrt(pow((a[2] - a[0]), 2) + pow((a[3] - a[1]), 2));
            double SideBC = sqrt(pow((a[4] - a[2]), 2) + pow((a[5] - a[3]), 2));
            double SideAC = sqrt(pow((a[4] - a[0]), 2) + pow((a[5] - a[1]), 2));

            double perimeter = SideAB + SideBC + SideAC;
            cout << "Perimeter: " << perimeter << '\n';
        }
        cout << "--------------------------------------------------------------"
                "--------------------\n";
    }
}
