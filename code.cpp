// beecrowd 1048 Salary Increase
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double salary, x;
    cin>> salary;
    if(salary >=0 &&  salary <= 400 ){
        x = salary*0.15;
        salary+= x;
        cout << "Novo salario: " << fixed <<setprecision(2)<< salary <<endl;
        cout << "Reajuste ganho: " << fixed <<setprecision(2)<< x <<endl;
        cout << "Em percentual: 15 %" <<endl;
    }
    else if(salary <= 800){
        x = salary*0.12;
        salary+= x;
        cout << "Novo salario: " << fixed <<setprecision(2)<< salary <<endl;
        cout << "Reajuste ganho: " << fixed <<setprecision(2)<< x <<endl;
        cout << "Em percentual: 12 %" <<endl;
    }
    else if(salary <=1200){
        x = salary*0.10;
        salary+= x;
        cout << "Novo salario: " << fixed <<setprecision(2)<< salary <<endl;
        cout << "Reajuste ganho: " << fixed <<setprecision(2)<< x <<endl;
        cout << "Em percentual: 10 %" <<endl;
    }
    else if(salary <= 2000){
        x = salary*0.07;
        salary+= x;
        cout << "Novo salario: " << fixed <<setprecision(2)<< salary <<endl;
        cout << "Reajuste ganho: " << fixed <<setprecision(2)<< x <<endl;
        cout << "Em percentual: 7 %" <<endl;
    }
    else{
        x = salary*0.04;
        salary+= x;
        cout << "Novo salario: " << fixed <<setprecision(2)<< salary <<endl;
        cout << "Reajuste ganho: " << fixed <<setprecision(2)<< x <<endl;
        cout << "Em percentual: 4 %" <<endl;
    }
    system("pause");
    return 0;
}