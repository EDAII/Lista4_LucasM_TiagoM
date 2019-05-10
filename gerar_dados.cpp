#include<bits/stdc++.h>

using namespace std;

int main () {

    int cont = 0;

    for (char a='A'; a<='Z'; a++) {
        b:
        for (char b='A'; b<='Z'; b++) {
            c:  
            for (char c='A'; c<='Z'; c++) {
                d:
                for (int d=0; d<=9; d++) {
                    e:
                   for (int e=0; e<=9; e++) {
                       f:
                        for (int f=0; f<=9; f++) {
                            g:
                            for (int g=0; g<=9; g++) {
                                cout << a << b << c << d << e << f << g << endl;
                                cont ++;
                                if (cont%1234123 == 0) {
                                    g++;
                                    if (g>9) goto g;
                                }
                                if (cont%2346 == 0) {
                                    f++;
                                    if (f>9) goto f;
                                }
                                if (cont%14351346 == 0) {
                                    e++;
                                    if (e>9) goto e;
                                }
                                if (cont%234623 == 0) {
                                    d++;
                                    if (d>9) goto d;
                                }
                                if (cont%23462346 == 0) {
                                    c++;
                                    if (d>'Z') goto c;
                                }
                                if (cont%54864568 == 0) {
                                    b++;
                                    if (b>'Z') goto b;
                                }
                                if (cont%95679 == 0) {
                                    a++;
                                    if (a>'Z') goto a;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    a:


    return 0;
}