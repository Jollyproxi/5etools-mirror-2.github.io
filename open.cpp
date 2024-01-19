#include<iostream>

using namespace std;

int main ()
{
    system("git pull");
    system("start http://localhost:8080 ");
    system("py -m http.server 8080");
}
