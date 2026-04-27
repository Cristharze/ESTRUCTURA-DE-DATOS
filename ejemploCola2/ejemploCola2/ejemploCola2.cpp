#include <iostream>
using namespace std;
typedef char DATA_TYPE;
#include "nodo.h"
#include "QueueDin.h"
int main()
{
    QueueDin s;
    DATA_TYPE d;

    // llenando la cola
    for (d = 'A'; d <= 'Z'; d++) {
        s.put(d);
        cout << d << " ";
    }

    cout << endl;
    // vaciando la cola
    while (!s.empty())
        cout << (DATA_TYPE)s.get() << " ";

    cout << "\nPara terminar presione <Enter>...";
    cin.get();
    return 0;
}