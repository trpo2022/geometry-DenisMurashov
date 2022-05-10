#include <1ibhello/hello.h>
void A(double Ax, double Ay, double Bx, double By, double Cx, double Cy, double Dx, double Dy)
{
    
    double  min_AB_x, min_AB_y, max_AB_x, max_AB_y, min_CD_x, min_CD_y, max_CD_x, max_CD_y, prost1, prost2, prost3, prost4;
    cout << fixed << setprecision(10);


    Point AB(Bx - Ax, By - Ay);
    Point CD(Dx - Cx, Dy - Cy);
    Point AC(Cx - Ax, Cy - Ay);
    Point AD(Dx - Ax, Dy - Ay);
    Point CA(Ax - Cx, Ay - Cy);
    Point CB(Bx - Cx, By - Cy);
    if (AB * CD != 0)
    {
        if ((((AB * AC) * (AB * AD)) <= 0) and (((CD * CA) * (CD * CB)) <= 0))
        {
            //cout << "YES";
            count1++;
        }
        else
        {
            //cout << "NO";
            //return 0;
        }
    }
    else
    {
        if (AB * AC != 0)
        {
            //cout << "NO";
            //return 0;
        }
        min_AB_x = min(Ax, Bx);
        min_AB_y = min(Ay, By);
        max_AB_x = max(Ax, Bx);
        max_AB_y = max(Ay, By);
        min_CD_x = min(Cx, Dx);
        min_CD_y = min(Cy, Dy);
        max_CD_x = max(Cx, Dx);
        max_CD_y = max(Cy, Dy);
        prost1 = max(min_AB_x, min_CD_x);
        prost2 = max(min_AB_y, min_CD_y);
        prost3 = min(max_AB_x, max_CD_x);
        prost4 = min(max_AB_y, max_CD_y);
        if ((prost1 <= prost3) and (prost2 <= prost4))
        {
            //cout << "YES";
            count1++;
        }
        else
        {
            //cout << "NO";
        }
    }
    //return 0;
    
}

void AreaCircle() {
    double Area = 3.14 * pow(a[2], 2);
    cout << "Area: " << Area << "\n";
}

void PerCircle() {
    double perimeter = 2 * 3.14 * a[2];
    cout << "Perimeter: " << perimeter << "\n\n";
}

void Circle(int F, int CH,int iCnt,int T,int Zap)
{
    if (F > 0) {
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

        if (err == 0)
        {
            AreaCircle();
            PerCircle();
        }
        cout << "----------------------------------------------------------------------------------\n";
    }
}

void AreaTriangle() {
    double Area = sqrt(pow((a[0] - a[2]), 2) + pow((a[1] - a[3]), 2));
    cout << "Area: " << Area << '\n';
}

void PerTriangle()
{
    double SideAB = sqrt(pow((a[2] - a[0]), 2) + pow((a[3] - a[1]), 2));
    double SideBC = sqrt(pow((a[4] - a[2]), 2) + pow((a[5] - a[3]), 2));
    double SideAC = sqrt(pow((a[4] - a[0]), 2) + pow((a[5] - a[1]), 2));

    double perimeter = SideAB + SideBC + SideAC;
    cout << "Perimeter: " << perimeter << '\n';
}

int SUM(int F1, int CH, int iCnt1, int T, int Zap) {
    int sum = F1 + CH + iCnt1 + T + Zap;
    return sum;
}

void Triangle(int F1, int CH, int iCnt1, int T, int Zap)
{
    if (F1 > 0) {
        int err = 0;
        KOL++;
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

        if (err == 0)
        {
            AreaTriangle();
            PerTriangle();
        }
        //cout << "----------------------------------------------------------------------------------\n";

        if (KOL == 1)
        {
            for (int i = 0; i < 10; i++)
            {
                Per1[i] = a[i];
            }
            for (int i = 0; i < 8; i++)
            {
                cout << Per1[i]<<" ";
            }
            cout << '\n';
            /*cout << "Peresechenie: \n";
            A(Per1[0], Per1[1], Per1[2], Per1[3], Per1[4], Per1[5], Per1[6], Per1[7]);
            cout << '\n';
            cout << "----------------------------------------------------------------------------------\n";
            cout << '\n';*/
            cout << "----------------------------------------------------------------------------------\n";
        }
        if (KOL == 2)
        {
            for (int i = 0; i < 8; i++)
            {
                Per2[i] = a[i];
            }
            for (int i = 0; i < 8; i++)
            {
                cout << Per2[i]<<" ";
            }
            cout << '\n';
            /*cout << "Peresechenie: \n";
            A(Per2[0], Per2[1], Per2[2], Per2[3], Per2[4], Per2[5], Per2[6], Per2[7]);
            cout << '\n';
            cout << "----------------------------------------------------------------------------------\n";
            cout << '\n';*/
            cout << "----------------------------------------------------------------------------------\n";
            Vivod++;
        }
        if (Vivod == 1)
        {
            cout << "intersection of triangles: \n";
            A(Per1[0], Per1[1], Per1[2], Per1[3],      Per2[0], Per2[1], Per2[2], Per2[3]);
            A(Per1[0], Per1[1], Per1[2], Per1[3],      Per2[0], Per2[1], Per2[4], Per2[5]);
            A(Per1[0], Per1[1], Per1[2], Per1[3],      Per2[2], Per2[3], Per2[4], Per2[5]);

            A(Per1[0], Per1[1], Per1[4], Per1[5],      Per2[0], Per2[1], Per2[2], Per2[3]);
            A(Per1[0], Per1[1], Per1[4], Per1[5],      Per2[0], Per2[1], Per2[4], Per2[5]);
            A(Per1[0], Per1[1], Per1[4], Per1[5],      Per2[2], Per2[3], Per2[4], Per2[5]);

            A(Per1[2], Per1[3], Per1[4], Per1[5],      Per2[0], Per2[1], Per2[2], Per2[3]);
            A(Per1[2], Per1[3], Per1[4], Per1[5],      Per2[0], Per2[1], Per2[4], Per2[5]);
            A(Per1[2], Per1[3], Per1[4], Per1[5],      Per2[2], Per2[3], Per2[4], Per2[5]);
            cout << '\n';
            if (count1 > 0)
            {
                cout << "Intersection exists\n";
            }
            else {
                cout << "No intersection\n";
            }
            count1 = 0;
            //cout << "----------------------------------------------------------------------------------\n";

            /*cout << "Peresechenie 2: \n";
            A(Per2[0], Per2[1], Per2[2], Per2[3], Per2[4], Per2[5], Per2[6], Per2[7]);
            cout << '\n';*/
        }
        
    }
    
}
